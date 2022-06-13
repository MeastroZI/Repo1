#include<iostream>
using namespace std;

class test
{
    int a;
    public:

/*    void setdata(int a)
    {
        //a=a;  --->?  /* imp point : local variable is the first priority in c++ do int this function both the "a"  in a=a is the a of the function so the value of the "a" of class is not set and show the garbage value so in this situation we use the this pointer 
//        this->a =a;
//          OR
//      (*this).a =a;

        //this pointer is the pointer which point to the object which invoke the member function 
        // so means this pointer point the object so now we can acess the varaible of class  so indirectly we are using the obejcet which call the function of class using this pointer;
        
    }*/

    test& setdata(int a)             // so we can return the object using this pointer 
    {                               // and because of this we cna call the another function  like .funcname after   the function which return the object                                       
        (*this).a=a;                                     
        return *this;               
    }   /*  |                        
            |
            |
            |
            |
            |
            V
            in this  if we not use "&" after class name than it means it return the copy of of object and not modifiable  

            and if  we use "&"  than it means we assign the address of *this [means value of this means obj which call the funciont]   and this function become the reference variable for the obj so when function call then it also return the obj*/
    void printdata()
    {
        cout<<a<<endl;
    }
};

int main()
{   test T;
    T.setdata(67).printdata();
    //T.printdata();

}