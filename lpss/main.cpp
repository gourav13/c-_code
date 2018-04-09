#include <iostream>

using namespace std;

void lps(string s)
{

    int n=s.length();
    int dp[n][n]={1};

    for(int i=0;i<n;i++)
     dp[i][i]=1;
     int s1=0,l=1;
    // int i=0
     for(int k=1;k<n;k++)
     {
         for(int i=0,j=k;j<n;j++,i++)
         {
             if(s[i]==s[j]&&dp[i+1][j-1])
                {dp[i][j]=1;
                  s1=i;
                  l=k+1;
                }
             else
                dp[i][j]=0;

         }

     }
     cout<<l<<endl;
     for(int i=s1;i<s1+l;i++)
        cout<<s[i];
}


int main()
{
    string s="gekekekeaeeeepeeepeee";
    lps(s);
    return 0;
}
