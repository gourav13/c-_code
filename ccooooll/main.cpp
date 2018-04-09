#include<iostream>
using namespace std;

void subseq(char *a,char *output)
{ cout<<"hey";
int k=0;
    for(int j=0;j<16;j++)
    {
   // cout<<"hello";
     int m=j;
        for(int i=0;i<4;i++)
    {    m=m>>0;
        if(m&1)
        output[k++]=a[i];

        else
            continue;
    }
    output[k++]=' ';
    }
    output[k++]='\0';
    cout<<output<<" ";

}


int main()
{
    char a[10]="abcd";
    char output[100];
    subseq(a,output);
    return 0;
}
