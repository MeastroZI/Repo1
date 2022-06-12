#include <iostream>
using namespace std;

class base
{
    protected:
    int a;

    public:

    base(){};
  
    virtual void display()=0;//this is pure virtual function 

};

class child1 : public base
{
    public:
    child1(int a)
    {
        this->a=a;
    }

    void display()
    {
        cout<<"The number from class **child1 class is  "<<a<<endl;

    }
};
class child2 : public base
{
    public:
    child2(int a)
    {
        this->a=a;
    }

    void display()
    {
        cout<<"The number from class ##child2 class is  "<<a<<endl;

    }
};

int main()
{ 
    /*base obj_base;
            |
            |
            |
            V
    because we use the pure virtual function in class base therefor it become the abstract class therfore  we can't make the object of class */

    base* obj_base_pointer[2];
    
    child1 obj_child1(8);
    obj_base_pointer[0]=&obj_child1;
    obj_base_pointer[0]->display();

    child2 obj_child2(50);
    obj_base_pointer[1]=&obj_child2;
    obj_base_pointer[1]->display();

    


}