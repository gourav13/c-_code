#include<iostream>
using namespace std;

void bs(int *a,int n,int s=0,int e=10)
{   int mid;
        mid=(s+e)/2;

        if(a[mid]==n)
           {
             cout<<mid;
              return;
           }
        else if(a[mid]>n)
        {
            e=mid-1;
            mid=(s+e)/2;
            bs(a,n,s,e);
        }
        else if(a[mid]<n)
        {
            s=mid+1;
            mid=(s+e)/2;
            bs(a,n,s,e);
        }

    return;
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9};
    int n=6;
    bs(a,n);

    return 0;
}
