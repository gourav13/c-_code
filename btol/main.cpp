#include<iostream>
using namespace std;

int main()
{
    int n=6 ,cakes=8,cn[10]={10,20,30,40,50,60};
    cout<<"enter no. class and cakes ";
    cin>>n>>cakes;
    cout<<"no. of classes "<<n<<"and cakes are "<<cakes;
    for(int i=0;i<n;i++)
    {
        cin>>cn[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(cn[i]>cn[j])
            {
                int temp=cn[i];
                cn[i]=cn[j];
                cn[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<cn[i]<<" ";
    }

return 0;
}

