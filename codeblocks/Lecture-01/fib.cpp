#include<iostream>
using namespace std;

int fib(int n){
    ///Base Case
    if(n==0||n==1){
        return n;
    }

    ///Rec Case
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    cout<<fib(5)<<endl;


return 0;
}
