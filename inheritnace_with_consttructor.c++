#include<iostream>
using namespace std;

class parents
{
    public:
    int totlang= 10, mylearn ;
        parents(){};
        parents(int x){
            cout<<x;
        }
        void getskill(int x)
        {
            mylearn=x;
            cout<<mylearn<<"  languages i learn  out of "<<totlang<<endl;

        }
};


class child : private parents
{
    public:

    //mylearn=y  cant access the variable directlyz
    child (int y)//doubt why we need to make default contructo in base class if we make the 
    //paramirize constructor in base and derivide
    {
        getskill(y);
    }
    
};

int main()
{
    child meastro(3);
    
}