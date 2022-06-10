#include <iostream>
using namespace std;

class base1
{
    int basedata;

public:
    int comnum=4;
    base1(int a)
    {
        basedata = a;
        cout << "the value of base data is " << basedata << endl;
    }
};

class base2
{
    int base2data;

public:
    int comnum=5;
    base2(int b)
    {
        base2data = b;
        cout << "the value of base2 data is " << base2data << endl;
    }
};

//class derived : base1,virtual public base2   (in this base 2 constructur is call first becasue of virtual base class)

class derived : base1 ,base2   // in this case base1 constructor is call first 
{
    int derived1 , derived2;
    public:

        /* we can call the multiple constructor of parent class by entering its varibale after scope resolution operator like this
                                            |
                                            |
                                            V                           */
    derived(int q, int r ,int s , int t):base1(q), base2(r)
    {
        derived1=s;
        derived2=t;
        cout<<"the value of derived1 and derived2 is "<<derived1<<derived2<<endl;
       
        /* if the same variable is present in both class then we can access the require varible of class like this
                                            |
                                            |
                                            |
                                            |
                                            V
        cout<<"the value of comman num is "<<base2::comnum;*/

    }
};

int main()
{
    derived div(1,2,3,4);
    
}

