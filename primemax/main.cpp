#include<iostream>
#include<vector>
using namespace std;


int createPrimeArray(vector<int> &v,int n)
{
    for(int i=0;i<=n;i++)
    {
        v.push_back(i);
    }
    int s=v.size()-1;
    cout<<" s : "<<s;
    for(int i=2;i<s;i++)
    {if(v[i]!=0)
       {cout<<"hello";
       for(int j=2*v[i];j<=s;j=j+v[i])
       {
           cout<"jj";
           if(j<=s)
           v[j]=0;

       }
       }
       cout<<"cool";
    }
     for(int i=0;i<=s-1;i++)
        cout<<v[i]<<" ";
    cout<<"life";
    return s;
}

int main()
{
    int n=100;
    //cin>>n;
    vector<int> v;
   int s= createPrimeArray(v,n);


    //int s=v.size();
    cout<<"size : "<<s;
    for(int i=0;i<=s-1;i++)
        cout<<i<<" : :"<<v[i]<<endl;
    return 0;
}
