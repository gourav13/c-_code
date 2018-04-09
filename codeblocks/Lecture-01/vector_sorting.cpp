#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    ///Vector is resizeable array, ADT defined in C++ STL

    vector<int> v;
    v.reserve(10);
    cout<<v.capacity()<<endl;

    for(int i=0;i<12;i++){
        v.push_back(10-i);
    }
    ///Sort
    sort(v.begin(),v.begin()+5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;

    cout<< *v.begin();



return 0;
}
