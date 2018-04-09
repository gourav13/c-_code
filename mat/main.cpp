#include <iostream>
#include<vector>
using namespace std;
int f[3][3]={{1,1,0},{1,0,0},{0,0,0}};
int p[3][3]={{1,1,0},{1,0,0},{0,0,0}};

int m=2;
void multiply1()
{
int a[3][3]={0};
    for(int k=0;k<m;k++)
    {
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                a[k][j]+=f[k][i]*p[i][j];
            }
        }
    }
    for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                f[j][i]=a[j][i];
            }
        }
}
void multiply()
{int a[3][3]={0};
    for(int k=0;k<m;k++)
    {
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                a[k][j]+=f[k][i]*f[i][j];
            }
        }
    }
    for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                f[j][i]+=a[j][i];
            }
        }


}

void mypower(int n)
{
    if(n==0)
        return;
    mypower(n/2);
    if(n&1)
        {multiply1();
        multiply();
      return;}
     else
     {multiply();
         return;}
}

int main()
{
    for(int k=1;k<5;k++)
   {  mypower(k);
       for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
        cout<<f[i][j]<<" ";
    cout<<endl;
    }
     f[0][0]=1;
     f[0][0]=1;
     f[0][0]=0;
     f[0][0]=1;
     f[0][0]=0;
     f[0][0]=0;
     f[0][0]=0;
     f[0][0]=0;
     f[0][0]=0;
     cout<<endl;
}
    return 0;
}
