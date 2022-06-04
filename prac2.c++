#include<iostream>
using namespace std;
class shope
{
    int id[10];
    int price[10];
    static int counter;
    public:

    void setcounter(){counter=0;}

    void getidprice()
    {
        cout<<"enter the id and price "<< counter+1<<" iteam\n";
        cin>>id[counter]>>price[counter];
        counter++;
    }

    void display()
    {
        for (int i = 0; i < counter; i++)
        {
            cout<<"price of iteam with id "<<id[i]<<" is "<<price[i]<<endl;
        }
        
    }
};

int shope::counter=0;

int main()
{
    shope dukan,dukan2,dukan3,dukandis;
    
    dukan.getidprice();

    
    
    dukan2.getidprice();

    
    dukan3.getidprice();

    
    dukan2.getidprice();

    dukandis.display();
}