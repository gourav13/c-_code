#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


vector<int> v(100000,0);
/*
 int  giveChocolate(int idx,int  limit,int count) {
    if (idx > limit) return count ;
    if (limit == 1)
        { //count%=mod;
            count=count+1;
        return count ;}



    count=giveChocolate(1, limit - 1,count);
    count=giveChocolate(idx + 1, limit,count);
    return count;

}*/


int main()
{    v[0]=1;
v[1]=2;
v[2]=2;
v[2]= 2;
v[3]= 6;
v[4]= 24;
v[5]= 120;
v[6]= 720;
v[7]= 5040;
v[8]= 40320;
v[9]= 362880;
  ios_base::sync_with_stdio(false);
    int t;
   cin>>t;
    int n,m;
    long long int ans=1;
    while(t--){
        cin>>m>>n;

        for(int i=2;i<=m;i++)
        {   ans%=mod;
            ans*=i%mod;


        }
        cout<<ans%mod<<endl;
/*       // cin>>m>>n;
        int count=0;
        ans =giveChocolate(1,i,count);
        cout<<"v["<<i<<"]="<<" "<<ans<<";"<<endl;
  */
  }
    //ans%=mod;

    return 0;
}
