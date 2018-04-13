#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a[]={1,4,2,3,7,5};


    int n=*(&a+1)-a;
    int dp[n]={};
    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {

            if(a[i]<a[j])
                dp[j]=max(dp[j],dp[i]+1);

        }
    }
    for(int j=0;j<n;j++)
        {
               cout<<dp[j]<<" ";
        }
        cout<<endl;
    cout<<*max_element(dp,dp+n)+1;
    return 0;
}
