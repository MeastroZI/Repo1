#include<iostream>
using namespace std;


int main()
{
    int a;
    int* ptr = &a;
    * ptr =999;
    cout<<"the value of a is "<< *ptr<<endl;

    int* b = new int(5);//this will make the variable a dynamically and store the 5 as a value


    int *arr = new int[3] ;
    arr[0]=10;
    * (arr+1)=20; //we can also store the value like that
    arr[2]=30;


    //delete[] arr; //this will dynamically deleat the arr;
    //[] to dealeat the continues block of memory

    cout<<"the vlaue of arr[1] is "<< arr[0] <<endl;
    cout<<"the vlaue of arr[2] is "<< arr[1] <<endl;
    cout<<"the vlaue of arr[3] is "<< arr[2] <<endl;
    
}