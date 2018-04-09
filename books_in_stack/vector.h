

template<typename T>
class Vector {
    T *a;
    int cs;
    int ms;

public:
    Vector(int s=6)
    {
        a=new T[s];
        cs=0;
        ms=s;
    }

    void push_back(T d)
    {
        if(cs==ms)
        {
            T *olda=a;
            int oldsize=ms;
            ms=ms<<1;
            a=new T[ms];

            for(int i=0;i<oldsize;i++)
            {
                a[i]=olda[i];
            }
            delete [] olda;
         //   olda=NULL;
        }


        a[cs]=d;
        cs++;
    }

    void pop_back()
    {
        if(cs>0)
            cs--;
    }

    int size() const{
     return cs;
     }

     int capacity() const{
     return ms;
     }

     T operator[](int i)
     {
         return a[i];
     }

};

