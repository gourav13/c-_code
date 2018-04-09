#include<iostream>
using namespace std;



int main(){
     int n,m,k;
     int a[1000];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
    int  last=n-1;
     int beg=0;
     int mid=n/2;
     cin>>m;
     k=-1;
     for(int j=0;j<10;j++)
     {
      if(m==a[mid])
            k=mid;
      else if(m<a[mid])
        {last=mid;
         mid=(mid+beg)/2;
         beg=beg;
        }

        else if(m>a[mid])
        {   beg=mid;
            mid=mid+last;
            last=last;
        }

     }
 cout<<k;
    return 0;
}
