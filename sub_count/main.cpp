#include<iostream>
using namespace std;

bool dp[7][11];
int count=0;
void checksubset(int *a,int n,int sum=6,int sumg=6)
{
    if(n<=0||sum<=0)
    {cout<<endl;

      //cout<<" return ";
        return;}

    if(dp[n-1][sum-a[n-1]]==1)
    {   //cout<<"search for next ";

        cout<<a[n-1]<<" ";
        checksubset(a,n-1,sum-a[n-1]);

    }
    if(sum-a[n-1]!=0||sumg-a[n-1]==0)
    if(dp[n-1][sum]==1)
       {// cout<<" n-1 ";

         checksubset(a,n-1,sum);
       }

    else
            return ;


    return;
}

void subset(int *a ,int n,int sum =10)
{


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

    checksubset(a,n);
    /*for(int i=sum;i>=0;i--)
    {
        if(dp[n][i]==1)
        {
            if(dp[n-1][i-a[n-1]]==1)
                cout<<a[n-1]<<" "<<endl;
            else if(dp[n-1][i]==1)
                n--;
        }

    }*/
    return ;
}

int main()
{

    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);

    subset(a,n);
}
