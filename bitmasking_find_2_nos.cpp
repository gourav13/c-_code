#include<iostream>
using namespace std;

int main()
{    int n=10;
int am[32];
    int a[100000];//={8,6,8,6,7,5,8,6,5,5};
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
  int ans=0;
    for(int i=0;i<n;i++)
    {
       // cin>>a[i];
        for(int j=0;j<32;j++)
        {
            if(1&a[i]>>j){
                am[j]++;
                //cout<<am[j]<<" j"<<j<<"  " ;
                }
        }
    }
  //  for(int i=0;i<n;i++)

        //for(int j=0;j<32;j++)
        {
           //cout<<am[j]<<"    ";
        }

        for(int j=31;j>=0;j--)
        {
            if(am[j]%3==1){
            //        cout<<am[j]<<"  ";
            ans=ans|1;
            ans=ans<<1;}
            else
                {   ans=ans|0;
                    ans=ans<<1;}
        }
 ans=ans>>1;
cout<<ans;

    return 0;
}
