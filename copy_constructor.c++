#include<iostream>
using namespace std;

class copycons
{
    int a;

    public:
    copycons(){
        a=0;
        
    }

    copycons(int num)
    {
        a=num;
        

    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
    }
    /*copycons(copycons &obj)
    {
        a=obj.a;
        cout<<"the value of a for copied object by copy constructor is "<<a;
    }*/

};

int main()
{
    copycons x(8) ,y ,z , x1;
    x.display();
    y.display();
    x1.display();
    




}