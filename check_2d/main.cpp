#include <iostream>
#include <typeinfo>
using namespace std;
void twod(auto *a)
{ //cout<<typeof(a)<<endl;


   cout << typeid(a).name() << '\n';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    twod(a);
    return 0;
}
