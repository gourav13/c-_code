#include<bits/stdc++.h>
using namespace std;
int dp[10][100];
int rec(int m,int n,int x)
{
	if(n==0&&x==0)
	return 1;
	if(n==0)
	return 0;
	
	int p=0;
	for(int i=1;i<=m;i++)
	p+=rec(m,n-1,x-i);
	return p;
}
int rec1(int m,int n,int x)
{           if(dp[n][x]>0)
            return dp[n][x]; 
	if(n==0&&x==0)
	return 1;
	if(n==0)
	return 0;
	
	int p=0;
	for(int i=1;i<=m;i++)
	p+=rec(m,n-1,x-i);
	dp[n][x]=p;
	return p;
}

void cn()
{
	int n,m,x;
	n=3;m=6,x=8;
	cout<<rec1(m,n,x);
}

int main()
{
	cn();
	return 0;
}