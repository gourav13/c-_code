#include <iostream>

using namespace std;

int reccoinschange(int *coins,int n,int amount=3)
{
    if(amount==0||n==0)
        return 0;
    int y=0;
    int i=n-1;
    int x=0;
    ///inc ith coin
    if(amount>=coins[i])
    x=1+reccoinschange(coins,n,amount-coins[i]);

    y=reccoinschange(coins,n-1,amount);
    //cout<<x<<" : "<<y<<endl;
    return x+y;
}
int coinschange(int *coins,int n,int amount=51)
{
    int dp[n+1][amount+1];

    for(int i=0;i<=amount;i++)
        dp[0][i]=1000;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=amount;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if(coins[i-1]<=j)
            {
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }

   /* for(int i=1;i<=n;i++)
    {cout<<"coins"<<coins[i-1]<<"  : ";
        for(int j=0;j<=amount;j++)
        {cout<<dp[i][j]<<"   ";}
    cout<<endl;
    }*/
    return dp[n][amount];
}

int main()
{
    cout << "Hello world!" << endl;
    int coins[]={1,2,5,10};
    int n=sizeof(coins)/sizeof(coins[0]);
    cout<<endl<<" : "<<reccoinschange(coins,n,13)<<endl;
    /*for(int i=1;i<20;i++)
    cout<<endl<<i<<" : "<<coinschange(coins,n,i)<<endl;*/
    return 0;
}
