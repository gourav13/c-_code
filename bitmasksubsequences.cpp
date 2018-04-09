#include<iostream>
#include<cstring>
using namespace std;
int count=0;
void subseq(char *a,char *output)
{ //cout<<"hey";
    int n=strlen(a);
int k=0;
    for(int j=0;j<n*n;j++)
    {
   // cout<<"hello";
     int m=j;
        for(int i=0;i<n;i++)
    {
        if(m>>(n-1-i)&1)
        output[k++]=a[i];

        else
            continue;
    }
    output[k++]=' ';
     count++;
    }
    output[k++]='\0';
    cout<<count<<endl;
    //for(int p=k-1;p>0;p--)
    cout<<output;
    //cout<<output<<" ";

}


int main()
{
    char a[100];//="abcd";
    char output[10000];

   cin.getline(a,100);
    int q=strlen(a);
    //cout<<q;
    char ch;
    /*for(int i=0;i<(q)/2;i++)
    { // cout<<a<<endl;
        ch=a[i];
        a[i]=a[q-i-1];
        a[q-i-1]=ch;
    }*/
    //cout<<a;

    subseq(a,output);

    //cout<<strlen(a);
    return 0;
}
