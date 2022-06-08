#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
    public:

    //test(int i , int j):a(i),b(j)  we can also initalize the value of constructor  like this
    //test(int i , int j):a(i) ,b(i+j)// this is also work
    //test(int i , int j):b(j),a(i)//this is also work
    //test(int i , int j):a(i),b(j+a)//this is also work
    test(int i , int j):a(j+b),b(i)//this not goona work bcz the value of a is initilize first becasue it was declare first
    {
        cout<<"the vlaue of a is "<<a<<endl;
        cout<<"the vlaue of b is "<<b<<endl;

    }
};

int main()
{
    test t(9, 10);
}

