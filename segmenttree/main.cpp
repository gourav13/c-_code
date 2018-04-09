#include <iostream>

using namespace std;

class tree
{public:
    int data;
    tree *left;
    tree* right;
    tree(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }

};

void build(int *a,int s,int e,tree * root)
{
    if(s==e)
    {
        root->data=a[s];
        return;
    }
    if(s<e)
    {
       int mid=(s+e)/2;
        root->left=new tree(0);
        root->right=new tree(0);
        build(a,s,mid,root->left);
        build(a,mid+1,e,root->right);
        root->data=root->left->data+root->right->data;
    }
    return ;

}
void update(tree * root,int index,int val,int s,int e)
{
    if(s==e)
    {
        if(index==s)
        root->data=val;

    }
    if(s<e)
    {
        int mid=(s+e)/2;
        if(index<=mid)
            update(root->left,index,val,s,mid);
        else
            update(root->right,index,val,mid+1,e);

            root->data=root->left->data+root->right->data;

    }

 return;
}

void print(tree * root)
{if(root==NULL)
return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
 return ;
}

int sum(tree * root,int l,int r,int s,int e)
{
    if(l>e||r<s)
        return 0;
    else if(l<=s&&e<=r)
        return root->data;
    else
    {
     int mid=(s+e)/2;
     int p1=sum(root->left,l,r,s,mid);
     int p2=sum(root->right,l,r,mid+1,e);
     return p1+p2;
    }
}

int main()
{
    cout << "Hello world!" << endl;

    int a[6]={1,3,5,7,9,11};
    tree *root=new tree(0);
    build(a,0,5,root);
    root->data=root->left->data+root->right->data;
    print(root);
    update(root,0,2,0,5);
     cout<<endl;
     print(root);
     cout<<endl<<sum(root,2,4,0,5);
     cout<<endl<<sum(root,2,2,0,5);
     cout<<endl<<sum(root,0,5,0,5);
     cout<<endl<<sum(root,-2,4,0,5);
    return 0;
}
