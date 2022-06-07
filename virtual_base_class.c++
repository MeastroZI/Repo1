#include<iostream>
using namespace std;

class parent
{

    public:
    int data1=1;
    

};


class child : virtual public parent
{

    public:
    int childdata=2;

};

class child2 : virtual public parent
{

    public:
    int chil2data=3;

    

};

class subchild : public child,child2
{
    public:

    void displaydata()
    {
        cout<<"the value of data1 is"<<data1<<endl; // if access the data1 of parent  class without making virtual base class then this one show the error of ambiguty 
        cout<<"the value of child data is"<<childdata<<endl;
        cout<<"the value of child data is"<<chil2data<<endl;
    }

    
};

int main()
{
    subchild subc ;

    subc.displaydata();
}
