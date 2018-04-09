#include<iostream>
using namespace std;

void subset(int *a ,int n,int sum =10)
{
    bool dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
        dp[i][0]=true;
    for(int i=1;i<=sum;i++)
        dp[0][i]=false;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int j=0;j<=sum;j++)
        cout<<j<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {cout<<a[i-1]<<" ";
        for(int j=1;j<=sum;j++)
        { cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}

int main()
{

    int a[]={2,5,6,4,9};
    int n=sizeof(a)/sizeof(a[0]);

    subset(a,n);
}
