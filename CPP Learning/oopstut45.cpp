#include <iostream>
using namespace std;
//pointers in derived classes
class BaseClass{
      public:
      int var_base;
      void Display(){
            cout<<"The value of base class i.e var_base class is: "<<var_base<<endl;
      }
};
class DerivedClass: public BaseClass{
    public:
    int var_Derived;
    void Display(){
      cout<<"The value of derived class i.e var_Derived class is :"<<var_Derived<<endl;
      cout<<"The value of base class i.e var_base class is :"<<var_base<<endl;

    }
};

int main() {
//write code from here 
BaseClass * pointer_of_baseclass;
BaseClass obj_base;
DerivedClass obj_derived;
pointer_of_baseclass = & obj_derived;//pointing to an derived object even if it is pointer of base class
pointer_of_baseclass->var_base=34;
pointer_of_baseclass->Display();
// pointer_of_baseclass->var_derived=134;//will throw an error beacuse the pointer is from base class then we can only access the base member function 


DerivedClass * pointer_of_DrivedClass;
pointer_of_DrivedClass = &obj_derived;
pointer_of_DrivedClass->var_Derived =55;
pointer_of_DrivedClass->var_base=65;
pointer_of_DrivedClass->Display();



      return 0;
}