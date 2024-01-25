#include <iostream>
using namespace std;
// constructor in derived class in cpp
/*

Case1:
class B : public A{
      //order of execution of constructor -> first A() then B()

}
Case2:
class A:public B,Public c{
//order of execution of constructor -> B() then C() and A()
}

Case3:
class A:public B virtual public class c{
      //order of execution of constructor -> first C() then B() and then A()
}
*/

class Base1
{
      int data1;

public:
      Base1(int i)
      {
            data1 = i;
            cout << "Base1 class Constructor called" << endl;
      }
      void PrintDataBase1(void)
      {
            cout << "The value of data1 is " << data1 << endl;
      }
};
class Base2
{
      int data2;

public:
      Base2(int i)
      {
            data2 = i;
            cout << "Base2 class Constructor called" << endl;
      }
      void PrintDataBase2(void)
      {
            cout << "The value of data2 is " << data2 << endl;
      }
};
class Derived : public Base1, public Base2
{
      int derived1, derived2;

public:
      Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
      {
            derived1 = c;
            derived2 = d;
            cout << "The Derived Constructor is called" << endl;
      }
      void PrintDataDerived(void)
      {
            cout << "The value of Derived1 is " << derived1 << endl;
            cout << "The value of Derived2 is " << derived2 << endl;
      }
};
int main()
{
      // write code from here
      Derived om(10, 21, 2001, 2002);
      om.PrintDataBase1();
      om.PrintDataBase2();
      om.PrintDataDerived();
      return 0;
}



// #include <iostream>
// using namespace std;
// class Base1{
//       int data;

//       public:
//       Base1(int i ){
//             data = i;
//       }
//       void printBase1(void){
//             cout<<"This is Data1: "<<data<<endl;
//       }

// };
// class Derived2:public virtual Base1{
//       int data;

//       public:
//      Derived2(int i , int c):Base1(c){
//             data = i;
//       }
//       void printBase2(void){
//             cout<<"This is  derived Data2: "<<data<<endl;
//       }
// };

// class Derived1:  public virtual Base1{
//     int derived;
//     public:
//     Derived1(int a, int d):Base1(d){
//       derived = a;

       
//     }
//     void printData(void){
//       cout<<"This is the value of Derived class "<<derived<<endl;
//     }
// };
// int main() {
// //write code from here 

// Derived1 om(21,4);
// om.printBase1();

// om.printData();

// Derived2 oml(12,4);
// oml.printBase1();
// oml.printBase2();

//       return 0;
// }