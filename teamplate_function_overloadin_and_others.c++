#include<iostream>
using namespace std;

/*template <class t1, class t2>
class test
{
    int num ,num2;
    public:
    void display(t1 num,t2 num2 );
};
template <class t1, class t2>  //this way we can redefine the function from class on outside of the classz
void test<t1,t2> ::display(t1 num , t2 num2)
{
    cout<<num<<endl;
    cout<<num2;
}


int main()
{
    test<float,int>  obj;
    obj.display(5.3,8);
}
*/

void func(int a)
{
    int num = a;
    cout<<"i am in normal function value of number is "<<num<<endl;

}

template <class t>
void func(t b)
{
    cout<<"i am in teamplatize function the value of number is "<<b<<endl;
}

int main()
{
    func(5); // when we enter the some value and if there is presence of exact data type of the value is available in function then that is the first priority 

    //here we can see that same name of function void func is available with the teamplate but when we enter the some integer then there is avalibility of exact data type of function  so that is his  higher priority  so it run that func

    func('c'); //as we can see when we write the  value of datatype whose exact function is not available then run the templatized function
}
