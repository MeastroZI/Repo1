#include<iostream>
using namespace std;


template <class t1 ,class t2> // as we can se we can also use teamplate in function ,in function we put the custom data type then it automatically read the enter datatype 
void sum(t1 a , t2 b)  
{
    float ans; 
    ans=a+b;
    printf("your sum of enter number is %0.3f \n" , ans);
}



int main()
{
    sum(9.2,2.5);

}