#include <iostream>

using namespace std;

int k=0;
void per(string &s,int n,char *out,int i)
{

    if(i>=n)
    {
       out[i]='\0';
        cout<<k++<<" "<<out<<endl;

        return;
    }

    for(int j=0;j<n;j++)
    {

       out[i]=s[j];
      // cout<<out;
       per(s,n,out,i+1);
    }
}

int main()
{
    cout << "Hello world!" << endl;

   string s="abc";
   //string s1=s;
   char a[4];
   per(s,s.size(),a,0);
    return 0;
}
