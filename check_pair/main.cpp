#include <iostream>
using namespace std;

class tree{
 public:
 int data;
  tree* left;
  tree* right;
  tree(int d)
  {
  	data=d;
  	left=NULL;
  	right=NULL;

  }
  };

void print(tree* root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

pair<int,int> min_max(tree *root,int dis,int minn,int maxx)
{
	if(root==NULL)
	{//pair<int,int> p=make_pair(minn,maxx);
		return {minn,maxx};}
	minn=min(minn,dis);
	maxx=max(maxx,dis);
	pair<int,int> p1=min_max(root->left,dis-1,minn,maxx);
	pair<int,int> p2=min_max(root->right,dis+1,minn,maxx);
	pair<int,int> p3=make_pair(min(p1.first,(p2.first)),max((p1.second),(p2.second)));
	return p3;
}
void printline(tree* root,int dis,int line){
	if(root==NULL)
	return;
	if(dis==line)
	cout<<root->data<<" ";
	printline(root->left,dis-1,line);
	printline(root->right,dis+1,line);


}

int main() {
	tree * root=new tree(1);
	root->left=new tree(2);
	root->right=new tree(3);
	root->left->left=new tree(4);
	root->left->right=new tree(5);
	root->right->left=new tree(6);
	root->right->right=new tree(7);

	root->right->left->right=new tree(8);
	root->right->right->right=new tree(9);
	print(root);
	pair<int,int> p=min_max(root,0,0,0);
	cout<<p.first<<" "<<p.second;
	cout<<endl;
	for(int i=p.first;i<=p.second;i++)
	{
		printline(root,0,i);
		cout<<endl;
	}
	return 0;
}
