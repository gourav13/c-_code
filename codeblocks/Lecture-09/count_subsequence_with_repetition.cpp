#include<bits/stdc++.h>
using namespace std;
string str="gfg";
int len=str.size();
void cn()
{
  int dp[len+1];
  dp[0]=1;
  map<char,int> m;
	for(int i=1;i<=len;i++)
	{
	  dp[i]=2*dp[i-1];
	  if(m[str[i-1]]==1)
	  dp[i]-=dp[m[str[i-1]]-1];
	  
	  m[str[i-1]]=i;
	  
	}
	
	for(int i=0;i<=len;i++)
	cout<<dp[i]<<" ";
	
	
	cout<<dp[len];
}

int main()
{
   cn();
  return 0;
}