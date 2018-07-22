#include <iostream>
using namespace std;

	int p[100][100];
	int dp[100][100];
string s="abaaba";
int n=s.size();
void cn()
{
	
	//for 1 character palindrome
	for(int i=0;i<n;i++)
	{//dp[i][i]=1;
	p[i][i]=1;}
	//for two character palindrome
	
	for(int i=0;i<n-1;i++)
	if(s[i]==s[i+1])
	{
		p[i][i+1]=1;
		dp[i][i+1]=1;
	}
	
	for(int i=2;i<n;i++)
	{
		
		for(int j=0;j+i<n;j++)
		{
			if(s[j]==s[j+i]&&p[j+1][j+i-1])
			{
				p[j][j+i]=1;
			}
			
			if(p[j][i+j])
			{
				dp[j][j+i]=dp[j][j+i-1]+dp[j+1][j+i]+1-dp[j+1][j+i-1];
			}
			else
			
				dp[j][j+i]=dp[j][j+i-1]+dp[j+1][j+i]-dp[j+1][j+i-1];
		}
	}
	cout<<"  ";
	for(int j=0;j<n;j++)
	cout<<s[j]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	    //if(i)
	    cout<<s[i]<<" ";
	    
	    for(int j=0;j<n;j++)
	    {
	        cout<<dp[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"  ";
	for(int j=0;j<n;j++)
	cout<<s[j]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	    //if(i)
	    cout<<s[i]<<" ";
	    
	    for(int j=0;j<n;j++)
	    {
	        cout<<dp[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<dp[0][n-1];
}

int main() {
	cn();
	return 0;
}