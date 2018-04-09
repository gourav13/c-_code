#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void mana(string s)
{ //cout<<"b1";
    int n=s.length();
    int dp[n];
   int j,k,s1=0,l=0,ans=0,p=0;
    for(int i=0;i<n;i++)
    {  ans=0;
        //cout<<"b3";
       if(s[i]==s[i+1])
       {
           j=i;
           k=i+1;
       }
       else{
        k=j=i;  //if problem
        j--;
        k++;
       }
     if(i!=0)
     {
     p=dp[i-1]
     }
     while(p)
        while(k<n&&j>=0)
        {//cout<<"a";
            if(s[j]==s[k])
            {

                j--;
                k++;
                ans++;
                if(l<ans)
                {
                    s1=i;
                    l=ans;
                }
            }
            else
                break;


        }
        if(s[i]==s[i+1])
        {dp[i]=2*ans;
        }
        else
         {dp[i]=2*ans+1;
         }

    }

        if(s[s1]==s[s1+1])
        {cout<<*(max_element(dp,dp+n))<<endl;
            for(int i=(s1-l+1);i<=(l+s1);i++)
            cout<<s[i];
        }
        else
         {cout<<*(max_element(dp,dp+n))<<endl;
         for(int i=(s1-l);i<=(l+s1);i++)
            cout<<s[i];
         }
    return ;
}

int main()
{
    string s;//="gekekekeaeeeepeeepeee";
     getline(cin,s);
    // cout<<"b";
    mana(s);
    return 0;
}
