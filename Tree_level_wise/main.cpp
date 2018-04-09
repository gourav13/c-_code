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

void level_wise_print(tree * root,int level)
{

    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    level_wise_print(root->left,level-1);
    level_wise_print(root->right,level-1);
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
	cout<<endl;
	level_wise_print(root,1);
	cout<<endl;
	level_wise_print(root,2);
	cout<<endl;
	level_wise_print(root,3);
	cout<<endl;
	level_wise_print(root,4);
	return 0;
}
