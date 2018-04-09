#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int *c=a;
   // *c=*a;
    *a=*b;
    *b=*c;
}

void bubblesort(int *a,int n)
{
    for(int j=0;j<n;j++)
    for(int i=0;i<n-j-1;i++)
    {
        if(a[i]>a[i+1])
           {
            swap(a[i],a[i+1]);}
    //(int i=0;i<n;i++)
    //cout<<a[i]<<" ";
    //cout<<endl;
    }
}


int main()
{   int n;//=10;
    cin>>n;
    int a[10000];//={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubblesort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
