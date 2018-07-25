#include<bits/stdc++.h>
using namespace std;
int dp[100][10000];
void cn()
{
	int a[] = {1, 2, 3, 4};
    int m = 2;
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int x:a)
    sum+=x;
    cout<<sum<<endl;
    
    for(int i=1;i<=n;i++)
    {
    	dp[i][a[i-1]]++;
    	for(int j=1;j<=sum;j++)
    	{
    		if(dp[i-1][j]>0)
    		{
    			dp[i][j]++;
    			dp[i][j+a[i-1]]++;
    		}
    	}
    }
     for(int i=0;i<=n;i++)
    {
    //	dp[i][a[i-1]]++;
    	for(int j=0;j<=sum;j++)
    	{
              cout<<dp[i][j]<<" ";		
    	}cout<<endl;
    }
    int c=0;
    for(int j=1;j<=sum;j++)
    {
    	if(j%m==0)
    	c+=dp[n][j];
    }
    cout<<c<<endl;

}

int main()
{    
	cn();
	return 0;
}
