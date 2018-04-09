#include"vector.h"

template<typename T>
class stack{
 Vector<T> v;

 public:

     void push(T data){

       v.push_back(data);

     }
     void pop()
     {
         v.pop_back();
     }
     T top()
     {  if(v.size()>=1)
         return v[v.size()-1];

         else
         {
            // cout<<"sorry stack is empty";
          }

     }

     bool isempty()
     {
         return v.size()==0;
     }
};
