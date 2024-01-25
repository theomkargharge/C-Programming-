// #include <iostream>
// using namespace std;
// class base
// {
// private:
//     int id1;

// public:
//     int getData(int a)
//     {
//         id1 = a;
//     }
// };
// class derived : public base
// {
// protected:
//     int id;

// public:
//     void setid1()
//     {
//         int shru;
//         id = shru;
//         cin >> id;
//     }
//     void getData()
//     {
//         cout << id;
//     }
// };
// int main()
// {
//     // write code from here
//     derived drs;
//     // drs.setid(34);
//     drs.setid1();
//     drs.getData();

//     return 0;
// }\\

// C++ program to demonstrate
// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
 // protected data members
protected:
 int id_protected;
 
};

// sub class or derived class from public base class
class Child : private Parent
{
 public:
 void setId(int id)
 {
  
  // Child class is able to access the inherited
  // protected data members of base class
  
  id_protected = id;
  
 }
 
 void displayId()
 {
  cout << "id_protected is: " << id_protected << endl;
 }
};

// main function
int main() {
 
 Child obj1;
 
 // member function of the derived class can
 // access the protected data members of the base class
 
 obj1.setId(81);
 obj1.displayId();
 return 0;
}
