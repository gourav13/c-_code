#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s="eabae";
    int n=s.size();
    if(string(s.begin(),s.begin()+n)==string(s.rbegin(),s.rbegin()+n))
        cout<<"its palindrome";
    else
        cout<<"no";
    return 0;
}
