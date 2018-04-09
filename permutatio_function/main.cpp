#include <iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{  //int i=1;
   //list<int> l={1,2,3};
   //forward_list<int>::iterator it;
  int arr[3]={1,2,3};
   //auto it=l.begin();
   //for (int&a : l)
     //   cout << a << " ";
    //cout << endl;
   //cout<<it->first;
    //string s="abc";
    do{
       for (int i=0;i<3;i++)
        cout << arr[i] << " ";
    cout << endl;
    }while(next_permutation(arr,arr+3));
    cout<<endl;
    //cout<<string(2,'a');
    return 0;
}
