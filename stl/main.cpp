#include <iostream>
#include<bits/stdc++.h>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({0,1,2,3,4,5,6,7,8,9,8,0});

    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    auto ptr=l.begin();
    for(int i=0;i<2;i++)
        ptr++;
    auto ptr1=l.emplace_after(ptr,5);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    cout<<"ptr1  "<<*ptr1<<endl;
  //  cout<endl<<" :"<<endl;
    l.erase_after(ptr1);
     for(auto x:l)
        cout<<x<<" ";
        cout<<endl;
        l.remove(8);
        for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
