#include<iostream>
using namespace std;
class complex
//arrays of object and object as a function argument
{
    int a,b;

    public:

    void getcomplex(int x , int y)
    {
        a=x;
        b=y;

        
    }
    void getsum(complex x1 ,complex x2)
    {
        a=x1.a + x2.a;
        b=x1.b + x2.b;
    }

    void getans()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }

    
};



int main()
{
    complex q,w,e;
    q.getcomplex(4,8);
    q.getans();


    e.getcomplex(1,3);
    e.getans();

    w.getsum(q,q);
    w.getans();



    return 0;
}