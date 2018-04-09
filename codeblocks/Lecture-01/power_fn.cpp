#include <iostream>
#include<math.h>
using namespace std;

int main()
{  
    int t;
    cin>>t;
    int n[10];
    long long int m=1000000007;
   long long  int a[10][16];
    long long int p=1;
    long long int sum=0;
    long long int result[10];
    for(int i=0;i<t;i++)
    {   p=1;
    sum=0;
        cin>>n[i];
        cin>>a[i][0];
        p=a[i][0]%m;
        sum=a[i][0]%m;
        long long int maxx=0;
        for(int j=1;j<n[i]-1;j++)
        {
            cin>>a[i][j];
            p*=a[i][j]%m;
            
            sum+=a[i][j]%m;
            
            
            long long int q=(p/sum)%m;
            result[i]=q;
            if(maxx<q)
            maxx=q;
            p%=m;
            sum%=m;
            p%=m;
            
            sum%=m;
        }
        sum+=a[i][n[i]-1]%m;
        
        p*=a[i][n[i]-1]%m;
        
        sum%=m;
        p%=m;
        
        result[i]=(p/sum)%m;
        if(result[i]<maxx)
        result[i]=maxx;
    }
    for(int i=0;i<t;i++)
    { 
        cout<<"Case #"<<i+1<<": "<<result[i]<<endl;
    }
    return 0;
}
