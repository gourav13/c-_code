#include <iostream>

using namespace std;

int lps(string s)
{
    int n=s.length();
    int dp[n][n]={0};
    string s1="";
    for(int i=0;i<n;i++)
        dp[i][i]=1;

    for(int k=1;k<n;k++)
    {
        for(int i=0, j=k;j<n;j++,i++)
        {
            if(s[i]==s[j])
                {dp[i][j]=dp[i+1][j-1]+2;
                s1+=s[j];
                }
            else
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }

    }
    cout<<s1;
    cout<<endl;
    cout<<"  ";

    for(int i=0;i<n;i++)
        cout<<s[i]<<" ";
        cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
     for(int j=0;j<n;j++)
     {
         cout<<dp[i][j]<<" ";
     }
     cout<<endl;
    }


    return dp[0][n-1];
}

int main()
{
    string s="gekekekeaeeeepeeepeee";
    cout<<lps(s)<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
