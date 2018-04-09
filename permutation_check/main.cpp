#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
     int q;
     vector<int> v[3];


     for(int i=0;i<3;i++)
     {
       std::string line;
    int j;
    while (std::getline( fin, line) ) //Read a line
    {
       std::stringstream ss(line);

       while(ss >> j) //Extract integers from line
         v[i].push_back(j);



    }


     }

     for(int i=0;i<3;i++)
     {

        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
     }


}
