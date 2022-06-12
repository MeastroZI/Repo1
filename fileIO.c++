#include<iostream>
#include<fstream>// header file for the file IO
#include <string>  // header file to use getline function


/* we use some classes for working with file in c++
this are the some inbuilt class in c++ for working with files

    1. fstreambase
    2. ifstream
    3. ofstream      
*/


/*in order to open the file we can use this 2 method

    1. using constructor
    2. using the member function of the class


*/
using namespace std;

int main()
{
    string st="my name is vinit", st2;
/*    ofstream  out("sample.txt"); // ofstream(this is class)  objname("filename")  use for write in file
    out<<st; // this will write the string in file
*/

    // to read the files

    ifstream in("sample.txt"); // to read the file;
    // but this methode only read the words bcz it cant read the space and newline
    //in>>st2;

    // to read the file line by line use getline function
    getline(in , st2) ;  //getline(ifstream obj , string in which u want to read the file)



    cout<<st2;



}