#include<iostream>
using namespace std;

class constructor
{
    int x,y;
    public:

    constructor(){}

    constructor(int a ,int b)
    {
        x=a;
        y=b;
        cout<<"the value of x is "<<x<<" the value of y is "<<y;
    }




};

int main()
{
    constructor c(4,5) , a;  //so as we can see there must will be one default constructor
}