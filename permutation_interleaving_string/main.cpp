#include <iostream>

using namespace std;


void per(string &s,string s1,string s2,int n ,int m,int k=0,int i=0,int j=0)
{

    if(k==n+m)
    {
        cout<<s<<endl;
        return;
    }

    if(i<n)
    {

        s[k]=s1[i];
        per(s,s1,s2,n,m,k+1,i+1,j);  ///also try k++ instead of k+1

    }

    if(j<m)  /// also try without if as it can also return based on condition given by k==m+n
    {
        s[k]=s2[j];
        per(s,s1,s2,n,m,k+1,i,j+1);

    }
}

int main()
{
    cout << "Hello world!" << endl;
    string s1="ab";
    int n=s1.size();
    string s2="cd";

    int m=s1.size();
    string s=s1+s2;
    per(s,s1,s2,n,m);
    return 0;
}
