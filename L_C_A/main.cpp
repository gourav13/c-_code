#include <iostream>

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
    cout<<lca(root,7,10)->data;
    cout<<endl;
    cout<<lca(root,7,6)->data;
    cout<<endl;
    cout<<lca(root,5,10)->data;


    return 0;
}
