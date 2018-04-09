#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int sum=0;
    int a[5];//={1,5,3,6,4};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
       {
        if(a[j]<a[i])
            sum+=a[j];
       }
    }

    cout<<sum;
    return 0;
}
