#include <iostream>
#include<vector>
using namespace std;

class tree{
    public:
int data;
tree* left;
tree* right;

 tree(int d)
 {   data=d;

     left=NULL;
     right=NULL;
 }
};

void print(tree *root)
{

    if(root==NULL)
        return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
/*
tree * lca(tree * root,int d1,int d2 )
{
    if(root==NULL)
    return NULL;

    if(root->data==d1||root->data==d2)
    {

        return root;
    }


    tree *t1=lca(root->left,d1,d2);
    tree *t2=lca(root->right,d1,d2);
    if(t1==NULL&&t2==NULL)
        return NULL;
    if(t1==NULL&&t2!=NULL)
        return t2;
    if(t1!=NULL&&t2==NULL)
        return t1;
    if(t1!=NULL&&t2!=NULL)
        return root;

}*/

bool findpath(tree * root,vector<int> &v,int d)
{

    if(root==NULL)
       {
         return false;
       }
    v.push_back(root->data);
    if(root->data==d)
    {
        return true;
    }
    if(findpath(root->left,v,d)||findpath(root->right,v,d))
    {

        return true;
    }
    else
    {

        v.pop_back();
        return false;
    }
}

int lca(tree *root,int d1,int d2)
{

    if(root==NULL)
        return -1;
    vector<int> v1,v2;

    if(findpath(root,v1,d1)&&findpath(root,v2,d2))
    {int i=0;
        for(;i<v1.size()&&i<v2.size();i++)
        {
          if(v1[i]!=v2[i])
          {

              break;
          }
        }
        return v1[i-1];
    }
    else{
        return -1;
    }

}
int main()
{
    tree * root=new tree(1);
    root->left=new tree(2);
    root->right=new tree(3);
    root->left->left=new tree(4);
    root->left->right=new tree(5);
    root->right->left=new tree(6);
    root->left->left->left=new tree(7);
    root->left->left->right=new tree(8);
    root->left->right->left=new tree(9);
    root->left->right->right=new tree(10);
    print(root);
    cout<<endl;
    cout<<lca(root,7,0);
    cout<<endl;
    cout<<lca(root,12,13);
    cout<<endl;
    cout<<lca(root,5,10);


    return 0;
}
