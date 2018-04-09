#include<iostream>
using namespace std;

int knapsack(int *wts,int *price,int W,int n)
{
    int dp[n+1][W+1];

    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=W;j++)
        {
            if(j==0||i==0)
                dp[i][j]=0;
            else if(wts[i-1]<=j)
                {dp[i][j]=max(price[i-1]+dp[i-1][j-wts[i-1]],dp[i-1][j]);
                //cout<<dp[i][j]<<endl;
                }
            else
                dp[i][j]=dp[i-1][j];
        }
       /* for (int j = 0; j <= W; j++)
       {
           if (j==0 || i==0)
               K[i][j] = 0;
           else if (wt[i-1] <= j)
                 K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],  K[i-1][j]);
           else
                 K[i][j] = K[i-1][j];
       }*/
    }
    for(int i=0;i<=n;i++)
{
      for(int j=0;j<=W;j++)
       cout<<dp[i][j]<<" ";
cout<<endl;
}
    return dp[n][W];

}

int main()
{

    int val[] = {60, 100, 120};
    int wt[] = {1, 2, 3};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapsack( wt, val,5, 3);
}
