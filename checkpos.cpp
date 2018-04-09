#include<iostream>
using namespace std;

void find(int *a,int n,int m,int j,int i)
{
    
    if(i<n)
  {
    if(m==a[i])
        j=i;
    else
        find(a,n,m,i+1)
  }
  else
    return;
}

int main() {
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    int j=-1;
    cin>>m;
    find(a,n,m,,j,0);

    }
    cout<<j;
	return 0;
}
