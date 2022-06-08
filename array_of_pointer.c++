#include<iostream>
using namespace std;

class shope
{
    int a;
    public:

   

    void getno(int x)
    {
        a=x;
    }
    void getdata()
    {
        cout<<"your no is "<<a<<endl;

    }
};

int main()
{
    shope*ptr = new shope[10]; // we can make the array which is pointed by the pointer
    //imp note ---> there is only one pointer which point the 1st value of the array we can move to the next element //of array but using ptr+1 or ptr++

    shope*ptrTemp = ptr;
    int Num;  
    for (int i = 0; i < 10; i++)
    {
        cout<<"enter the value of "<<i<<" array"<<endl;
        cin >> Num;
        (*ptr).getno(Num );
        ptr++;   
    }

    for (int i = 0; i < 10; i++)  // this loop is for print the value of the number
    {
        (*ptrTemp).getdata();
        //(*ptr).getdata()  // we cant use this because after the previous for loop the pointer point the last value of the array so even if we use ptr++ then it points the after element 

        //ptr--  if we use this then it print the no  from 10 to 1 so that show that pointer point the only first eleemnt of array of object we have to usee ptr++ for shift the pointer to the next obj of array;

        ptrTemp;
    }
    
    

    

}