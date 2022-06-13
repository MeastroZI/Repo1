#include<iostream>
using namespace std;


// teamplate with multipal parameter
 // i am making a program to add two arrays  in which if the first array is float then 2nd array must be an int 
template <class t1,class t2>

// this is the way to make multipal parameterize  template   seprated by commas
class sum
{
    public:
    t1 *arr1 ;
    t2 *arr2;
    float *add;
    int size;


    sum(int a)
    {
        size=a;
        add=new float[size];  // Note : if i write *pointer = new t1[size] then its wrong bcz *pointer means value of pointer but we have to store the address so correct is use pointer = new datatype[size]
        arr1=new t1[size];
        arr2=new t2[size];
        // new keyword allocate the  memory of given datatype and size and pointer take the address of this memory and we can use this allocate memory using pointer  
    }

    sum &addition()
    {
        for (int i = 0; i < size ;  i++)
        {
            add[i]=arr1[i]+arr2[i];
        }
        return *this;
    }
    void getans()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<add[i]<<endl;
        }
        
    }
};

int main()
{
    sum<int,float> obj(4);

    obj.arr1[0]=0.2;  
    obj.arr1[1]=1.5;  
    obj.arr1[2]=8.4;  
    obj.arr1[3]=1.2; 

    // arr2 
    obj.arr2[0]=1.2;  
    obj.arr2[1]=2.5;  
    obj.arr2[2]=7.4;  
    obj.arr2[3]=3.2;


    obj.addition().getans();  
}