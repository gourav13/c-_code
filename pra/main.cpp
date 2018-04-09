#include <iostream>
#include<vector>
using namespace std;
int f[3][3]={{1,1,0},{1,0,0},{0,0,0}};
int m[1][3]={{1,0,0};
void multiply1()
{
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
        a[i][j]+=f[i][j]*m[j];

}
void multiply()
{
    for(int k=0;k<m;k++)
    {
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                a[k][j]+=f[k][i]*f[i][j]
            }
        }
    }
    for(int j=0;j<m;j++)
        {
            for(int i=0;i<m;i++)
            {
                a[j][i]+=f[j][i]
            }
        }


}

void mypower(int n)
{
    if(n==0)
        return;
    int p=mypower(n/2);
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
   for(int i=0;i<20;i++)
    cout<<i<<":"<<mypower(i)<<endl;
    return 0;
}
