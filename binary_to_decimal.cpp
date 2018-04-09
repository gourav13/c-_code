#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int a;
    int sum=0;
    cin>>a;
    int num=a;
    int digit;
    int i=0;
    while(num!=0)
    {digit=num%10;
       sum+= pow(2,i++)*digit;
       num/=10;
    }
    cout<<sum;
    return 0;

}
