#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,ele;
    cin>>n>>k;
   // int a[n];


    //deque<int> q;
  set<pair<int,int>> s;
    int i=0;
    while(i<k)
    {cin>>ele;
     s.insert({ele,i});


    }
    set<pair<int,int>>::iterator it;
    it=s.end();
    it--;

    cout<<(*it).first<<" ";



    return 0;
}
