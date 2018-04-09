#include<iostream>
#include<cstring>
#include "stack.cpp"
using namespace std;

class book{
public:
int price;
char name[50];


    book(){}
    book(int value,char *n)
    {
        price=value;
        strcpy(name,n);
    }

    void print()
    {
        cout<<name<<"  "<<price<<endl;
    }
};

int main()
{
    /*stack<int> s;
    for(int i=0;i<10;i++)
    {
        s.push(i);
    }



    cout<<s.top()<<" ";

    cout<<endl;
    s.pop();
    cout<<s.top()<<" ";
*/
   stack<book> sb;

   book b1(100,"c++");
   book b2(200,"c");
   book b3(300,"java");

   sb.push(b1);
   sb.push(b2);
   sb.push(b3);

   sb.top().print();
   sb.pop();
   sb.top().print();
   sb.pop();
    sb.top().print();
   sb.pop();
    return 0;
}
