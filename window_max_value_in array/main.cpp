#include <bits/stdc++.h>

using namespace std;

int main()
{int a[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
int n=sizeof(a)/sizeof(a[0]);
int k=4;
    deque<int> q;
    for(int i=0;i<k;i++)
    {
        while(!q.empty()&&a[i]>=a[q.back()])
            q.pop_back();

         q.push_back(i);
    }

    cout<<a[q.front()]<<" ";

    for(int i=k;i<n;i++)
    {

        while(!q.empty()&&a[i]>=a[q.back()])
            q.pop_back();
        q.push_back(i);
        while(!q.empty()&&i-q.front()>=k)
            q.pop_front();
        cout<<a[q.front()]<<" ";
    }

    return 0;
}
