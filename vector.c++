#include<iostream>
#include<vector>// header file for vector
using namespace std;

template<class t> // now we use teamplate data type

void display(vector<t> &v)
{

    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl; // as we can see we can cout the element of vector like array example --> v[i]
        
    }
    cout<<v.at(4); // this will print the value of element at 4th place
    
}
int main()
{
    int size ,element;
    vector<int> vec1; // this is the way to creat the vector  --->  vector<data type> vectorname;
    //vector<char> vec2(5,'s'); // this will fill the vector with 5 number of "s"
    //display(vec2);                    **


    cout<<"enter the size of vector"<<endl;
    cin>>size;



    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element no "<<i+1<<endl;
        cin>>element;
        vec1.push_back(element); //this push back is use to stor the element in vector
    }

    //vec1.pop_back(); //this pop_back function will deleat the last emlement of vector **

    vector<int> :: iterator iter = vec1.begin();  // in this iterator means the object which is act like a pointer in this iterator is the keyword and the iter(we can write any) is the name of this iterator  in this vector.begin() means the first element of the vector so its means now iter point the first element of the vector **

    //vec1.insert(iter,500);// in this 500 is come to the first container of the vector **

    //vec1.insert(iter+2,500); // in this iter+2 means the it is point to the second element after jumping 2 container so now 500 is print from that cointner **

    //vec1.insert(iter+2,50,500); //now this will print the 50 copy of  500 after the 2nd place **
    display(vec1);


    // other member function of  vector is on website ----------->  "https://cplusplus.com/reference/vector/vector/"



    
    return 0;
}