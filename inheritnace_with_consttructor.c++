#include<iostream>
using namespace std;

class parents
{
    public:
    int totlang= 10, mylearn ;
        parents(){}; //<-- default constructor
        parents(int x){
            cout<<x;
        }
        void getskill(int x)
        {
            mylearn=x;
            cout<<mylearn<<"  languages i learn  out of "<<totlang<<endl;

        }
};


class child : public parents
{   int x;
    public:

    //mylearn=y  cant access the variable directly
    child (int y)//-----> imp note     we have to make the default construtor in parent class if paremetricz constructor is present in bothe base and derived calss
    
    
    
    //doubt why we need to make default contructor in base class if we make the 
    //paramirize constructor in base and derivide
    {
        //getskill(y);
        x=y;
    }
    
};

int main()
{
    child meastro(3);
    
}