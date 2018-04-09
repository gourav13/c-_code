#include <iostream>
#include <map>
using namespace std;


map<long long,long long > m;
int main()
{
    map<long long,long long>::iterator it;

    	m[2]=1;
			m[8]=1;
			m[4]=1;
			m[10]=1;
			m[12]=1;
			m[15]=1;

		long long k=1;
		for(it=m.begin();it!=m.end();++it)
		{
			it->second=k++;
			cout<<it->first<<" ";
			cout<<it->second<<" ";
			cout<<endl;
		}
		cout<<endl<<endl;
		for(int i=1;i<100;i++)
            cout<<m[i]<<" ";

    cout << "Hello world!" << endl;
    return 0;
}
