#include <iostream>
using namespace std;
int a[]={1,3,5,7};
int n=4;
int val=6;
void subset()
{
	int dp[n+1][val+1]={};
	int d[2][val+1];
	d[0][0]=1;
	d[1][0]=1;
	
	
	for(int j=1;j<=val;j++)
	dp[0][j]=0;
	for(int j=1;j<=val;j++)
	d[0][j]=0;
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=val;j++)
		{
			if(j>=a[i-1])
			d[i%2][j]=d[!(i%2)][j-a[i-1]];
			else
			d[i%2][j]=d[!(i%2)][j];
		}
	}
	
	
	if(d[n%2][val]||d[!(n%2)][val])
	cout<<"yes";
	else
	cout<<"no";
	cout<<endl;
}


int main() {
	subset();
	// your code goes here
	return 0;
}