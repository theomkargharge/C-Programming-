#include <iostream>
using namespace std;
// virtual Fucntion in cpp

class BaseClass{
      public:
      int var_base;
    virtual  void Display(){
            cout<<"The value of base class i.e var_base class is: "<<var_base<<endl;
      }
};
class DerivedClass: public BaseClass{
    public:
    int var_Derived=5;
    void Display(){
      cout<<"The value of derived class i.e var_Derived class is :"<<var_Derived<<endl;
      cout<<"The value of base class i.e var_base class is :"<<var_base<<endl;

    }
};

int main() {
//write code from here 
   BaseClass *baseclass_pointer;
   BaseClass baseclassobject;
   DerivedClass derivedclassObject;
   baseclass_pointer = & derivedclassObject;
  
   baseclass_pointer->Display();
      return 0;
}