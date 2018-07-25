#include<bits/stdc++.h>
using namespace std;

string dic[]={ "i", "like", "sam", "sung", "samsung", "mobile", "ice", 
  "cream", "icecream", "man", "go", "mango"};

int l=12;
bool check(string s)
{
	for(int i=0;i<l;i++)
	{
		if(dic[i].compare(s)==0)
		return true;
	}
	return false;
}

bool wordbreak(string s)
{
	int len=s.size();
	if(len==0)
	return true;
	
	for(int i=1;i<=len;i++)
	{
		
		if( wordbreak(s.substr(i,len-i))&&check(s.substr(0,i)))
		return true;
	}
	
	return false;
	
}
  

int main()
{  string s="isamsung";
	cout<<wordbreak(s);
	return 0;
}