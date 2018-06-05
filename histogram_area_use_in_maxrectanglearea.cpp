
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int maxArea(int M[MAX][MAX],int n,int m);
int main()
{
    int T;
    cin>>T;
int M[MAX][MAX];
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>M[i][j];
            }
        }
        
        cout<<maxArea(M,n,m)<<endl;
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method*/
int maxArea(int dp[MAX][MAX],int n,int m)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dp[i][j]==1)
            dp[i][j]+=dp[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    ///max area in histogram
    int maxx=0;
    for(int j=0;j<n;j++)
    {
        stack<int> s;
        int i=0;
        for(;i<m;i++)
        {
            if(s.empty())
            s.push(i);
            else if(dp[j][i]<dp[j][s.top()])
            {
                while(!s.empty()&&dp[j][i]<dp[j][s.top()])
                {
                    int tp=s.top();
                    s.pop();
                    maxx=max(maxx,dp[j][tp]*(s.empty()?i:i-s.top()-1));
                }
                s.push(i);
            }
            else 
            s.push(i);
            if(j==5)
            cout<<i<<" "<<maxx<<endl;
        }
        while(!s.empty())
    
                {
                    int tp=s.top();
                    s.pop();
                    maxx=max(maxx,dp[j][tp]*(s.empty()?i:i-s.top()-1));
                }
     cout<<j<<" "<<maxx<<endl;   
     /* int hist[m];
      for(int i=0;i<m;i++)
      hist[i]=dp[j][i];
        stack<int> s;
 
    int max_area = 0; // Initalize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar
                       // as the smallest bar
 
    // Run through all bars of given histogram
    int i = 0;
    while (i < m)
    {
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
 
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
 
            area_with_top = hist[tp] * (s.empty() ? i : 
                                   i - s.top() - 1);
 
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
 
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : 
                                i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
    maxx=max(maxx,max_area);*/
    }
    return maxx;
}