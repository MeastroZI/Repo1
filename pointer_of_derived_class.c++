#include <iostream>
using namespace std;

class base
{
    int a=3;

public:
    void display()
    {
        cout << "the value of a in the base class is " << a << endl;
    }
};

class derived : public base
{
    int b=5;

public:
    void display()
    {
        cout << "the value of b in derived class" << b << endl;
    }
};

int main()
{
    base* pointer_base;          // pointer of base class
    base base_obj;               // object of base class
    derived derivied_obj;        // object of derived class
    pointer_base =&derivied_obj; // set pointer point to the derived class


    (*pointer_base).display();    
//          or
//   pointer base->display()
//             |
//             |                      
//             V
// In this display function of base class is run even if make pointer point to the derived class this is something know as a LATE BINDING  means in this compiler bind the pointer with the base class bcz it bind the class by checking the pointer's type 
}
