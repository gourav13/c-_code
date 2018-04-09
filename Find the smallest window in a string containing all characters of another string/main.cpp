#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="this is the test string";
    string pat="tist";

    map<char,int> m1,m2;
    int len1=s.size();
    int len2=pat.size();
    int count =0;
    int start=0;
    int start_index=-1;
    int minn=INT_MAX;
    for(int i=0;pat[i]!='\0';i++)
        m2[pat[i]]++;
    for(int j=0;s[j]!='\0';j++)
    {
        m1[s[j]]++;
        /// checking the value is present in pattern or not of j th position in string s
        ///if present  then check should be less then the no. of required values
        if(m1[s[j]]<=m2[s[j]]&&m1[s[j]]!=0)
           {
             count++;
           }

           ///here we are removing the the character from starting so that to find another window
           ///because we are increasing j continuously
           /// we are checking if start  value already exist more then required or
           /// start value is not required i.e we do not need a value in pattern or that char is not present in pattern
        if(count == len2)
        {
           while(m1[s[start]]>m2[s[start]]||m2[s[start]]==0)  ///checking start char is more than required if than start++
           {                                                /// and decrease the hash map content if more value
                                                            /// because when we again compare then that value does not reflect
               if(m1[s[start]]>m2[s[start]])
                m1[s[start]]--;
               start++;
           }
           int min_len=j-start+1;
           if(min_len<minn)
           {

               minn=min_len;
               start_index=start;

           }
        }


    }
    if(start_index==-1)
        cout<<"no window is found";
    else
        for(int i=start_index;i<start_index+minn;i++)
        cout<<s[i];

    return 0;
}
