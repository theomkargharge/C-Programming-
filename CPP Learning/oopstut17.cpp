#include <iostream>
using namespace std;
class employee{

    int id ;
    // it can share count to all objects eg omkar and shruti also
    // static data member is count for class employee
    static int count;


    public:
    void setData(void)
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
        
    }

    //member of static variable 
    void getData(void){
        cout<<"The id of this employee is "<<id<<" And this is employee number "<<count<<endl;
    }

// static member function which can asscess the static data or variable
   static void getCount(void){
    cout<<"The value of count is "<<count<<endl;
   }


};

int employee :: count;//Defult valus is 0
// int employee :: count=100;//Defult valus is 0
int main()
{
 // Write code  here 
 employee omkar,shruti;

 omkar.setData();
 omkar.getData();
 employee::getCount();

 shruti.setData();
 shruti.getData();
 employee::getCount();


    return 0;
}