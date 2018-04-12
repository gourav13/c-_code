#include <bits/stdc++.h>

using namespace std;

int minno(int * a,int val,int n)
{int p=INT_MAX;
    if(val==0)
        return 0;
    if(n==0)
        return INT_MAX;


    ///include
    if(a[n-1]<=val)
    {

        p= minno(a,val-a[n-1],n)+1;
    }

    ///exclude
    //cout<<p<<" ";
    return min(minno(a,val,n-1),p);



}

int mi(int *a,int val,int n)
{

    int dp[n+1][val+1];
    for(int i=0;i<=val;i++)
    {
        dp[0][i]=100;
    }
    for(int i=0;i<=n;i++)
    {

        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=val;j++)
        {
           if(a[i-1]<=j)
           {
               dp[i][j]=dp[i][j-a[i-1]]+1;
           }
           else
           {dp[i][j]=dp[i-1][j];}
        }

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=val;j++)
        {
            //if(dp[i][j]!=INT_MAX-1)
          cout<<dp[i][j]<<" ";
          //else
            //cout<<" ";
        }
  cout<<endl;
    }
    return dp[n][val];
}
int main()
{
    cout << "Hello world!" << endl;
    int coins[]={2,5,10,20,50,100,500,2000};
    int
    int n=*(&coins+1)-coins;

    cout<<mi(coins,99,n);
     return 0;
}
