#include <iostream>
using namespace std;

class complex
{
   int a;
   int b;

public:
   //  Constructor is a special member function with same name as of the class .
   // it is used to initializ the objects of its class
   // it can run automatically or automatically invoked

   complex(void); // constructor declaration
   void printNumber()
   {
      cout << "This is the value of a and b " << a << "+i" << b << endl;
   }
};
// defult constructor dont having value it does not take any value beacuse is use void
complex::complex(void)
{
 a=0;
 b=0;
}
int main()
{
   // Write code  here
   complex c1, c2;
   c1.printNumber();

   return 0;
}

// Characterstics of Constructors

// 1. it should be decalred in the public section of the class
// 2.They are automatically invoked whenever the object is created
// 3.They cannot return values and do not have retrun types
// 4.it can have default arguments
// 5.we cannot refer to their address
