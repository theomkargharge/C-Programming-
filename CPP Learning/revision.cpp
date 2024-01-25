// // #include <iostream>
// // #include <typeinfo>
// // using namespace std;

// // int main()
// // {
// //     // write code from here

// //     /* ********************** tut 1 **************** */
// //     // Types of Data Types
// //     // int s;
// //     // string a;
// //     // float o;
// //     // double d;
// //     // long l;
// //     // bool m;

// //     // cout<<typeid(s).name()<<endl;

// //     // string to_string(int s);
// //     // s = 5;
// //     // cout << s;
// //     // // cout << typeid(s).name() << endl;

// //     // // four types of operators
// //     // /*
// //     // 1) Arithmatic Operator
// //     // 2) Assignment Operator
// //     // 3) Comparision Operator
// //     // 4) Logical Operator

// //     // */

// //     // // Arithmatic Operator
// //     // int a = 2, b = 3;
// //     // cout << "The Value of a + b is " << a + b << endl;
// //     // cout << "The Value of a - b is " << a - b << endl;
// //     // cout << "The Value of a * b is " << a * b << endl;
// //     // cout << "The Value of a / b is " << a / b << endl;
// //     // cout << "The Value of a % b is " << a % b << endl;

// //     // cout << "The value of a++ is " << a++ << endl;
// //     // cout << "The value of a-- is " << a++ << endl;
// //     // cout << "The value of ++a is " << a++ << endl;
// //     // cout << "The value of --a is " << a++ << endl;
// //     // cout << "The value of a+b is " << a++ << endl;

// //     // cout << endl
// //     //      << endl;
// //     // // Assignment Operator
// //     // //    int a = 2;
// //     // //    char c = '2';
// //     // //    bool b = true;

// //     // // this is all or comparision operators
// //     // cout << "this is (a==b) :" << ((a == b)) << endl;
// //     // cout << "this is (a!=b) :" << ((a != b)) << endl;
// //     // cout << "this is (a<=b) :" << ((a <= b)) << endl;
// //     // cout << "this is (a>=b) :" << ((a >= b)) << endl;
// //     // cout << "this is (a<b) :" << ((a < b)) << endl;
// //     // cout << "this is (a>b) :" << ((a > b)) << endl;

// //     // cout << endl
// //     //      << endl;

// //     // // This is all Logical operators

// //     // cout << "this is (a==b) : " << ((a == b) && (a < b)) << endl;
// //     // cout << "this is (a==b) : " << ((a == b) || (a < b)) << endl;
// //     // cout << "this is (a==b) : " << (!(a == b)) << endl;

// //     return 0;
// // }
// /*--------------- tut 2 ---------*/
// // #include <iostream>
// // #include <string.h>
// // using namespace std;
// // int a = 30; //this is global varible
// // int main()
// // {
// // write code from here
// //  Literals
// //  Literals are data used for representing fixed values.
// //  float a = 45.5;
// //  long double b= 34.33;
// //  double c = 43;
// //  cout<<a<<endl<<sizeof(45.5f)<<endl;
// //  cout<<b<<endl<<sizeof(34.33)<<endl;

// // refernces

// // int a = 5;
// // // local variable
// // int &y = a;
// // cout << a << endl;
// // cout << y << endl;

// // type casting

// // int x = 45;
// // int b = 456;

// // cout << double(a) << endl;
// // cout << float(b) << endl;
// // cout<<bool(a)<<endl;

// // Scope Revolution
// //  cout<<::a<<endl;
// /*for print or geting global varible value we use scope revolution*/

// //     return 0;
// // }

// /* =-=-=-=-=-=-=-=-=- tut 3 =-=-=-=-=-=-=-=-=-=*/

// // #include <iostream>
// // #include <iomanip>
// // using namespace std;

// // int main()
// // {
//     // write code from here
//     //********** Precedance and Associaty
//     // int a, b, c;
//     // a = ((5 * -5) + 6);
//     // cout << a << endl;
//     // b = ((((5 / 5) * 5) + 5) - 5);
//     // cout << b << endl;

//     // Manipulator
//     // string a, b, c,d;
//     // a = "*";
//     // b ="* *";
//     // c = "* * *";
//     // d = "* * * * ";
//     // cout<<setw(5)<<a<<endl;
//     // cout<<setw(4)<<b<<endl;
//     // cout<<setw(3)<<c<<endl;
//     // cout<<setw(2)<<d<<endl;

//     // constant
//     // const int a = 6;
//     // int a = 5;
//     // cout << a;
//     // cout << a;

//     // int age;
//     // cout << "Enter your age : ";
//     // cin >> age;

//     // if(age<18){
//     //     cout<<"You are not eligible for vote "<<endl;
//     // }
//     // else if (age == 18){
//     //     cout<<"You arejust 1 year left for vote"<<endl;
//     // }
//     // else {
//     //     cout<<"Your are eligible for vote and do vote it's your rights.! "<<endl;
//     // }

//     // switch (age)
//     // {
//     // case 1:
//     //     if (age < 18)
//     //     {
//     //         cout << "Your not eligible";
//     //     }
//     //     else
//     //     {
//     //         cout << "your are 18";
//     //         break;
//     //     }
//     // case 20:
//     //     cout << "You are 20";
//     //     break;

//     // case 21:
//     //     cout << "your are 21";
//     //     break;
//     //     default:
//     //         cout << "I Love S";
//     //         break;
//     //     }

//     //     return 0;
//     // }

//     // tut 4

// // #include <iostream>
// // using namespace std;

// //     int main()
// //     {
// //         // write code from here

// //         // pointers;
// //         // pointer it is a data type which hold the address of other data type

// //         int a = 3;
// //         int *b = &a;

// //         // (&)---> (Address of ) Operator
// //         // (*)-----> (Value at ) Dereference Operator

// //         //ADDRESS
// //         // cout << &a << endl;
// //         // cout << b << endl;

// //       //Value
// //     //   cout<<a<<endl;
// //     //   cout<<*b<<endl;

// //       //pointer to pointer

// //       int c = 51;
// //       int *d=&c;
// //       int **f = &d;

// //       //Store the addrees
// //       cout<<&c<<endl;
// //       cout<<d<<endl;
// //       cout<<f<<endl;

// //       // now get the values

// //       cout<<c<<endl;
// //       cout<<*d<<endl;
// //       cout<<**f<<endl;

// //     // int *si;
// //     int aa = 7;
// //     int *si = &aa;
// //     int bb = 5;
// //     int *si2 = &bb;
// //     cout<<*si<<endl;
// //     cout<<*si2<<endl;
// //     cout<<(*si+*si2)<<endl;
// //         return 0;
// //     }

// // tut 5

// // #include <iostream>
// // using namespace std;

// // int main() {
// // //write code from here

// // int marks[4]={1,2,3,5};
// // int target = 9;

// // for (int i = 0; i < target; i++)
// // {
// //     if((marks[i+i])==target){
// //        cout<<i<<endl;
// //     //    break;
// //     };
// //     // i++;

// // }

// // int *p = marks;
// // cout<<"Address"<<endl;
// // cout<<p<<endl;
// // cout<<p+1<<endl;
// // cout<<p+1<<endl;
// // cout<<p+2<<endl;
// // cout<<p+3<<endl;

// // cout<<"Value"<<endl;
// // cout<<*p<<endl;
// // cout<<*(p+1)<<endl;
// // cout<<*(p+2)<<endl;
// // cout<<*(p+3)<<endl;
// //       return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
// //write code from here

// //***************** Structures functions ************

// struct employee
// {
//     /* data */
//     int eid;
//     char faVchar;
//     string salary;
// };

// typedef struct employee{
//   int eid;
//   char faVchar;
//   string salary;
// }

//       return 0;
// }.

// #include <iostream>
// using namespace std;

// int main()
// {
//   // write code from here
//   int x=100;
//   // cin >> x;
//   char y;
//   cin >> y;
//     if(y>=48 && y<=57){
//       cout<<"digit"<<endl;
//     }
//     else{
//       cout<<"Not digit"<<endl;
//     }

//   return 0;
//

// #include <iostream>
// using namespace std;

// int main()
// {
//   // write code from here
//   int n, num, digit, rev = 0;

//   cin >> num;
//   n = num;

//   while(num!=0){
//     digit = num%10;
//     rev = (rev*10)+digit;
//     num = num/10;
//   }

//   if(n == rev){
//     cout<<"Number is palindrome"<<endl;
//   }
//   else{
//     cout<<"Number is not Palindrome"<<endl;
//   }

// tut 6

// #include <iostream>
// #include<string>
// using namespace std;

// struct PersonalData{
//   int rollnum;
//   string name;
//   char batch;
// };

// typedef struct PersonalData{
//   int rollnum;
//   string name;
//   char batch;
// }om;

// union funciton
// typedef union PersonalData
// {
//   int rollnum;
//   // string name;
//   char batch;
// }em;

// int main()
// {
// write code from here

// Struct Function

// Structure is user defined data types in cpp .structre creates a data type that can be used to group of items of possibly different types into single type

// struct PersonalData Omkar;
// Omkar.rollnum= 21;
// Omkar.name="Omkar Gharge";
// Omkar.batch='1';

// om Omkar;
// Omkar.rollnum= 21;
// Omkar.name="Omkar Gharge";
// Omkar.batch='1';

// cout<<Omkar.rollnum<<endl;
// cout<<Omkar.name<<endl;
// cout<<Omkar.batch<<endl;

// em omk;
// // omk.name = "Omkar Gharge";
// omk.rollnum=32;
// omk.batch='c';

// cout<<omk.rollnum<<endl;
// cout<<omk.batch<<endl;

//  Enumeration
//  Enums: Enums are user-defined types that consist of named integral constants.
// It helps to assign constants to a set of names to make the program easier to read, maintain and understand.

//   enum MyName{
//     Omkar,
//     Waman,
//     Gharge

//   };

//   MyName n1 = Omkar;
//   MyName n2 = Waman;
//   MyName n3 = Gharge;

//   cout<<n1<<endl;
//   cout<<n2<<endl;
//   cout<<n3<<endl;

//   return 0;
// }

// tut 7;

// functions in cpp

// return funtion ;
// #include <iostream>
// using namespace std;

// int sum(int x, int y)
// {
//   // int x=7;
//   // int y=8;
//   return (x + y);
// }
// // Non return fucntions which means void funtion

// void sum()
// {
//   int x = 4;
//   int y = 5;
//   cout << (x + y) << endl;
// }
// int main()
// {
//   // write code from here
//   cout << sum(5, 6) << endl;
//   sum();

//   return 0;
// }

// tut8

// define funtions using pointer reference

#include <iostream>
using namespace std;
int sum(int a, int b)
{
  int c = a + b;
  return c;
}

int swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Call by reference using pointer
void swapPointer(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  // return &a;
  // return &b;

}
// call by reference using c++ reference variables
int &swapReferenceVar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;

}

void SwapReferenceVar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  // write code from here
  int x ,y;
  x = 5;
  y = 6;
  // cout<<swap(x,y);
  // swapPointer(&x,&y);
  // swapReferenceVar(x,y);
  SwapReferenceVar(x,y);

  return 0;
}
