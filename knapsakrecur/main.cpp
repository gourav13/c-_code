#include<iostream>
using namespace std;

int knapsack(int wts[],int prices[],int N,int W){
    if(N==0||W==0){
        return 0;
    }

    ///Otherwise
    int i = N-1;

    ///Lelo
    int inc=0,exc=0;
    if(wts[i]<=W){
        cout<<"inc: "<<inc<<":item weight"<<wts[i] <<endl;
        inc = prices[i] + knapsack(wts,prices,N,W-wts[i]);
         cout<<"inc1: "<<inc<<endl;
     }
    ///Chod do mat lo
    cout<<"exc: "<<exc<<":item weight"<<wts[i] <<endl;
    exc = knapsack(wts,prices,N-1,W);
    cout<<"exc1: "<<exc<<endl;
    return max(inc,exc);
}

int main()
{
    cout << "Hello world!" << endl;
    int wts[]={2,3,5};
    int price[]={2,4,6};
    cout<<endl<<"knapsack"<<knapsack(wts,price,3,6);
    return 0;
}
