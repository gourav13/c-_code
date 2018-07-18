#include<bits/stdc++.h>
using namespace std;

int a[] = {1, 5, 8, 9, 10, 17, 17, 20};
int n=sizeof(a)/sizeof(a[0]);

void cn()
{
	int dp[n+1]={};
	
	for(int i=1;i<=n;i++)
	{int maxx=0;
		for(int j=1;j<=i;j++)
		{
			maxx=max(maxx,a[j-1]+dp[i-j]);
		}
		dp[i]=maxx;
	}
	cout<<dp[n];
}

int main()
{
	cn();
	return 0;
}