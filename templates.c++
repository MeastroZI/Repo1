#include<iostream>
using namespace std;

//template <class T>
/*class vector
{
    int size;
    public:
    int * arr;

    vector(int a){
        size=a;
        arr=new int[size];
    }

    int dotproduct(vector &v)
    {
        int d=0;

        for (int i = 0; i < size; i++)
        {
            d+=arr[i]*v.arr[i];

        }

        return d;
        
    }

};

int main()      
{
    vector v1(3) ;
    v1.arr[0]=1;
    v1.arr[1]=0;
    v1.arr[2]=3;

    vector v2(3);
    v2.arr[0]=2;
    v2.arr[1]=1;
    v2.arr[2]=7;

    int a=v1.dotproduct(v2);
    cout<<a;


}
//so in this program we get the dot product of int but what we do if we waana find this same for float we have to write the whole program for float data type SO ANNOYING :(  in this situation we use teamples
// using teampltes is like use parametrized class means we can run the same class for any data type 


lets see the example fof teamplate

*/


template <class T> // we havewrite like that to make teamplate  afterw this we have to write T in place of the data type in which we have to make them  parametrize()
class vector
{
    int size;
    public:
    T * arr;

    vector(int a){
        size=a;
        arr=new T[size];
    }

    T dotproduct(vector &v)
    {
        T d=0;

        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];

        }

        return d;
        
    }

};

int main()      
{
    vector<float> v1(3) ; // after the class name we have to write the data type for which we have to run the class 
    v1.arr[0]=1.2;
    v1.arr[1]=0;
    v1.arr[2]=3.4;

    vector<float> v2(3);
    v2.arr[0]=0.2;
    v2.arr[1]=1.6;
    v2.arr[2]=4.4;

    float a=v1.dotproduct(v2);
    cout<<a;

// so this is the template we ca use this is in competativ programing c


}