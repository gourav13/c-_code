#include <iostream>

using namespace std;


void build(int *a,int s,int e,int *arr,int node=1)
{
    if(s==e)
    {
        arr[node]=a[s];
        return;
    }
    if(s<e)
    {
       int mid=(s+e)/2;

        build(a,s,mid,arr,2*node);
        build(a,mid+1,e,arr,2*node+1);
        arr[node]=arr[2*node]+arr[2*node+1];
    }
    return ;

}
void update(int *arr,int node,int index,int val,int s,int e)
{
    if(s==e)
    {
        if(index==s)
        arr[node]=val;

    }
    if(s<e)
    {
        int mid=(s+e)/2;
        if(index<=mid)
            update(arr,2*node,index,val,s,mid);
        else
            update(arr,2*node+1,index,val,mid+1,e);

            arr[node]=arr[2*node]+arr[2*node+1];
    }

 return;
}

void print(int *arr,int node=1,int s=0,int e=5)
{
    if(s==e)
    {

        cout<<arr[node]<<" ";
        return;
    }
  else if(s>e)
    return;
    {cout<<arr[node]<<" ";
    /*int mid=(s+e)/2;
    if(mid==0)
        cout<<arr[2*node]<<" ";
    else*/{
    print(arr,2*node,s,(s+e)/2);
    }
    print(arr,2*node+1,((s+e)/2)+1,e);
    }
 return ;
}

int sum(int *arr,int node,int l,int r,int s,int e)
{
    if(l>e||r<s)
        return 0;
    else if(l<=s&&e<=r)
        return arr[node];
    else
    {
     int mid=(s+e)/2;
     int p1=sum(arr,2*node,l,r,s,mid);
     int p2=sum(arr,2*node+1,l,r,mid+1,e);
     return p1+p2;
    }
}

int main()
{
    cout << "Hello world!" << endl;

    int a[6]={1,3,5,7,9,11};
    int s=0,n=6,node=1;
    int arr[2*n+2];
    build(a,s,n-1,arr);
  print(arr);
    update(arr,node,s,2,0,n-1);
     cout<<endl;
     print(arr);
     cout<<endl<<sum(arr,node,2,4,s,n-1);
  return 0;
}
