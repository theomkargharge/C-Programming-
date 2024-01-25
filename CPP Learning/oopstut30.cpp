// Inheritance example
#include <iostream>
using namespace std;

class employee{
    public:
    int id;
   float salary =34.0;


    employee(int inpid){
     id = inpid;
     

    //  cout<<"This is the id of employer object "<<id<<endl;
    }
    employee(){}
};
/*
-> Derived class syntax
                                        
 class {{derived -class-name}}:: ({{visibility-mode}}--> means either private or public) {{base-class-name}}
 {
    class members/methods/etc.....
 }

 note:
 1.default visibility mode is private
 2.public visibility mode: Public members of the base becomes public members of the derived class 
 3.private visiblity mode : public members of the base class becomes private members of the derived class 
 4. private members are never inherited 
*/


class programmer :  employee
{
     public:
     
     programmer(int inpid)
     {
           id = inpid;
        //    cout<<"This is the id of programmer object"<<id<<endl;
     }
     int languagecode =9;
     void getData(){
        cout<<"This is the id of programmer object : "<<id<<endl;
     }
     void getsalary(){
        cout<<salary<<endl;
     }

};


int main() {
//write code from here 
employee omkar(1),rohan(2);
// cout<<omkar.salary<<endl;
// cout<<rohan.salary<<endl;
programmer skillf(3);
skillf.getData();
cout<<"this is the languagecode value "<<skillf.languagecode<<endl;

cout<<"This is the salary of employee which is inherited from the base class emoployee and the salary is: ";
skillf.getsalary();
      return 0;
}