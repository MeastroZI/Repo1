#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map <string,int>  points ; 
    /* this is the way to make the map 
                    |
                    |
                    V
    map< data_type_of_key ,data_type_of_value>  map_name*/ 

    // map is the data type which store the vlaue and keys means EX:  name = value **


    points["c++"] = 8 ;// this is the way to enter the key and value   in  map **

    points.insert({{"python",9.2} ,{"java",9.0},{"javscript",8.9}});
    // this is also the way tp insert the key and value to the map


    map<string,int>:: iterator itr ; //making the oterator for map


    for (itr = points.begin() ; itr != points.end(); itr++) 
    // run the iterator from begin() of the map to end() of the map
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;

        // cout the key and value of the map       
        // in this (*itr).first means first value of the map or the key value of the map and (*itr).second means the second value of the map   **
    }




    /* there is still more member function of the map is reamaining to learn about them take the reference from this website
                |
                |
                |
                V
    https://m.cplusplus.com/reference/map/map/



    */
    
    



}