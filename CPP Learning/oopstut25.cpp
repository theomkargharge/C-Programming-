// #include <iostream>
// using namespace std;
// // default agruments in constructor 
// class simple{
//     int a ,b,c;

//     public:
//      simple(int z, int x = 25, int y = 45){
//           a = z;
//           b = x;
//           c = y;
//      }
//      void printNumber();
// };

// void simple:: printNumber(){
//     cout<<"The value of a , b and c is "<<a<< " , "<<b<<" and "<<c<<endl;
// }
// int main()
// {
// //write code from here 
//     simple om = simple(2);
//     om.printNumber();



//       return 0;
// }.

// one more example

#include <iostream>
using namespace std;
class complex{
   int x; 
   int y;

  public:
   complex(int real  , int imaginary);
   void printComplexNumber();
};


complex ::complex(int real = 4 ,int imaginary =5){
  x =real;
  y = imaginary;
  
}

void complex::printComplexNumber(){
    cout<<"The complex number is "<<x <<" + i "<<y<<endl;
}
int main() {
//write code from here 
  complex shru = complex();
  shru.printComplexNumber();

  complex omm(21,10);
  omm.printComplexNumber();

      return 0;
}