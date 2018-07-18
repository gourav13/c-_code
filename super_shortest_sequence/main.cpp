// A dynamic programming based C program to
// find length of the shortest supersequence
#include<bits/stdc++.h>
using namespace std;

// Returns length of the shortest
// supersequence of X and Y
int superSeq(char* X, char* Y, int m, int n)
{
    int dp[m + 1][n + 1];

    // Fill table in bottom up manner
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
        // Below steps follow above recurrence
        if (!i)
            dp[i][j] = j;
        else if (!j)
            dp[i][j] = i;
        else if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
        else
                dp[i][j] = 1 + min(dp[i - 1][j],
                                  dp[i][j - 1]);
        }
    }
    cout<<"    ";
    for (int j = 0; j < n; j++)
        cout<<Y[j]<<" ";
        cout<<endl;
        for (int i = 0; i <= m; i++)
    {  if(i)
    cout<<X[i-1]<<" ";
    else
        cout<<"  ";
        for (int j = 0; j <= n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[m][n];
}

// Driver Code
int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    cout << "Length of the shortest supersequence is "
        << superSeq(X, Y, strlen(X), strlen(Y));
    return 0;
}
