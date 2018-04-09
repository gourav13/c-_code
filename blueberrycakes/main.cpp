#include<iostream>
using namespace std;

int main()
{
    int n=6 ,cakes=18,cn[10]={10,20,30,40,50,60};
    cout<<"enter no. class and cakes ";
//    cin>>n>>cakes;
    cout<<"no. of classes "<<n<<"and cakes are "<<cakes<<endl;
    for(int i=0;i<n;i++)
    {
  //      cin>>cn[i];
    }
int maxi=cn[0];
   int j=0;

   int m=0;
   int cpy[10];
   for(int i=0;i<n;i++)
    cpy[i]=cn[i];
cakes-=n;
   while(cakes!=0)
     {maxi=cn[0];

        for(int i=0;i<n;i++)
        {
            if(maxi<cn[i])
            {
                maxi=cn[i];
                j=i;
            //    m=j;
            }

        }

        int d=cpy[j]/cn[j];
        int ab=0;
    cn[j]*=d;
    ab=cn[j]%(d+1);


        cn[j]/=(d+1);
   cn[j]+=ab;
        cakes--;

        for(int z=0;z<n;z++)
    {
        cout<<"  "<<cn[z];
  //      cin>>cn[i];
    }
    cout<<endl;
     }
  maxi=cn[0];
     for(int i=0;i<n;i++)
        {
            if(maxi<cn[i])
            {
                maxi=cn[i];
                j=i;
            //    m=j;
            }

        }

    cout<<maxi;
return 0;
}
