#include <bits/stdc++.h>

using namespace std;

bool cmp(string a,string b)
{
    return a.size()>b.size();
}

int main()
{
    cout << "Hello world!" << endl;
    //int a[5]={5,3,4,2,1};
    string a[5]={"abc","acd","abc","xz","dghj"};
    stable_sort(a,*(&a+1),cmp);
    for(auto x:a)
        cout<<x<<" ";
    return 0;
}
