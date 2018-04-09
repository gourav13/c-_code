#include <iostream>

using namespace std;

int first(int *a,int x,int s,int e)
{

    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(a[mid]==x&&a[mid-1]<x||mid==0)
        return mid;
    int p=-1,q=-1;
    if(a[mid]<x)
    {
      return first(a,x,mid+1,e);
    }
   else
    return first(a,x,s,mid-1);

}

int last(int *a,int x,int s,int e)
{

    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(a[mid]==x&&a[mid+1]>x||mid==9&&a[mid]==x)
        return mid;
    int p=-1,q=-1;
    if(a[mid]>x)
    {

    return last(a,x,s,mid-1);
    }
   else
      return last(a,x,mid+1,e);

}

int main()
{
 int a[] = {1, 1, 2, 2, 2, 3, 4, 7 ,8 ,8 };
 for(auto x:a)
 cout<<last(a,x,0,9)-first(a,x,0,9)+1<<endl;
    return 0;
}
