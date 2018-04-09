#include <iostream>

using namespace std;

int knapsack(int *wts,int *prices,int n,int W)
{
    if(n==0||W==0)
        return 0;
    ///include a particular item
    ///lets try to include ith item
    int i=n-1;

    ///if wts is less than or equal we can put it in a bag
    int x=0,y=0;
    if(wts[i]<=W)
    {///here we are including the item and decreasing capacity by present value
        x=prices[i]+knapsack(wts,prices,n,W-wts[i]);

    }


    ///exclude a particular item

    ///now we are excluding the item whichcannotbe included
    y=knapsack(wts,prices,n-1,W);
    ///return maxx value
    return max(x,y);
}

int dpKnapsack(int wts[],int prices[],int N,int W){

    int dp[100][100] = {0};

    for(int n=1;n<=N;n++){
        for(int w=1;w<=W;w++){
            int i = n-1;


            int inc=0,exc=0;

            if(wts[i]<=w){
                inc = prices[i] + dp[n][w-wts[i]];
            }
            exc = dp[n-1][w];

            dp[n][w] = max(inc,exc);



        }

    }
    return dp[N][W];
}

int main(){
    int wts[] = {2,1,3,2};
    int prices[] = {1,3,5,2};

    cout<<knapsack(wts,prices,4,6)<<endl;
    cout<<dpKnapsack(wts,prices,4,6)<<endl;
//    cout<<dpKnapsack(wts,prices,4,6)<<endl;

return 0;
}
