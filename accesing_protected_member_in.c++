#include<iostream>
using namespace std;


class parent
{
    protected:
    int rollnum;

};

class child :protected parent
{
    public:
    void show(int a)
    {
        rollnum=a;
        cout<<"the value of protected member of the parent class is "<< rollnum<<endl;

    }
};

int main()
{
    child c;
    c.show(567);
}

