#include <iostream>
#include<vector>
#define ll long long
using namespace std;
ll int f[3][3]={{1,1,1},{1,0,0},{0,1,0}};
ll int p[3][3]={{1,1,1},{1,0,0},{0,1,0}};
int m=3;
void multiply1()
{ll int a[3][3]={0};
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
{ll int a[3][3]={0};
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
                f[j][i]=a[j][i];
            }
        }


}

void mypower(int n)
{
    if(n==1)
        return;
    mypower(n/2);
     if(n&1)
    {

        multiply();
        multiply1();
        return ;
    }
     else
     {multiply();
         return;}
}

int main()
{
   for(int k=1;k<10;k++)
   {cout<<k<<" "<<endl;
       mypower(k);
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<m;j++)
           {
               cout<<f[i][j]<<" ";
           }
           cout<<endl;

       }
       f[0][0]=1;
       f[0][1]=1;
       f[0][2]=1;

       f[1][0]=1;
       f[1][1]=0;
       f[1][2]=0;

       f[2][0]=0;
       f[2][1]=1;
       f[2][2]=0;
       cout<<endl;
   }
    return 0;
}

