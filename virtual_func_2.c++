#include <iostream>
#include<cstring>
using namespace std;

class base
{
protected:
    int a=5;
    string ans;

public:
    base(){};
    base(string ans)
    {
        this->ans = ans;
        
    }

    virtual void display() 
    {
        cout << "how's your 17 days determinent challange is going on "
             << "ANS:"<<ans <<endl;
    }
};

class derived : public base 
{
    public:
    string k;
    derived(string k)
    {
        this->k=k;
    }
    void display()
    {
        cout<<"Now this days you are going to shop for helping mother so how's your 17 days determinent challange is going on ANS:"<<k<<endl;
    }



};
int main()
{
    string l="very good" ,c="good";

    //home
    base * base_class_pointer;
    base obj_base(l);
    base_class_pointer = &obj_base;
    base_class_pointer->display(); // run for base class 


    //shope
    derived obj_derived(c);
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); 
/*                     |
                       |
                       |
                       V
    /* so as we can see if we not make the display func to virtual then it always run the base class func even if we point the pointer to the derivied class obj bcz this pointer is of base class type*/

    return 0;
}

/*      SOME RULES OF VIRTUAL FUNCTION
    
    ->  This function cannot be static
    ->  They are access by object pointers
    ->  Virtual function can be the friend of another class
    ->  if ther is virtual function in base class and not in derivied class then it run the virtual function even if we  call the function of derivied class
*/


