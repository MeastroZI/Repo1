#include<iostream>
#include<list>
using namespace std;

void display(list<int> &ls)
{
    list<int> :: iterator itr; // making a iterator
    for (itr = ls.begin(); itr!=ls.end(); itr++)
    // so in this ls.begin() means the starting point of the list which assign to the itr (iterator)  this loop runs until itr not come to end of list
    {
        cout<<*itr<<" "; // printing the value of 
        //itr(pointed to the list elements)
    }
    

}

int main()
{
    list<int> lst1 ; //this is way to creat the list ---> list <data type> listname **
    list<int> lst2(3);



    // this is the way to put the vlaue on list **
    lst1.push_back(3);
    lst1.push_back(4);
    lst1.push_back(7);
    lst1.push_back(1);
    lst1.push_back(8);
    lst1.push_front(5); // this will push the value on 1st position **

    //lst1.pop_back();// this will remove the last element of the list  **


    //lst1.pop_front(); // this will remove the first element of the list  **


    lst1.remove(1); // this will rmeove all the presence of the entered value

    lst1.sort();  // this will sort the list 

    list<int> :: iterator itr= lst2.begin();
    *itr = 882;
    itr++;
    *itr = 886 ;
    itr++;
    *itr = 86 ;
    itr++;
    *itr = 800 ;
    // we can also put the value using iterator like that **
    // imp talk --->  when length of list is 0 then the iterator can't push the value to that list  bcz it need the conatiner of the list to point so if the length of list is 0 that means no cointainer    **


    lst1.merge(lst2); // this will merge lst2 to the lst1
     
    display(lst1); 




    // There is still lot of member function of list  if u want to read that then go to the website ------->  https://m.cplusplus.com/reference/list/list/




}