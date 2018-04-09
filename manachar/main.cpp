#include <iostream>
#include<algorithm>
using namespace std;

void mana(string s)
{
    int n=s.length();
    int dp[n];

    for(int i=0;i<n;i++)
    {  int j,k,ans=0;
        k=j=i;  //if problem
        j--;
        k++;

        while(k<n&&j>=0)
        {
            if(s[j]==s[k])
            {

                j--;
                k++;
                ans++;
            }
            else
                break;

        }
        dp[i]=2*ans+1;

    }
    cout<<*(max_element(dp,dp+n));

    return ;
}

int main()
{
    string s="gekekekeaeeeepeeepeee";

    mana(s);
    return 0;
}
