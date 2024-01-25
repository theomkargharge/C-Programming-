#include <iostream>
using namespace std;
int main()
{
    /* code */
    // There are four types of operator 
    /*
    1) Arithmatic Operator
    2) Assignment Operator
    3) Comparision Operator
    4) Logical Operator
    */
//   This following are arithmatic operators 
    int a =2,b=3;
    // cout<<"The value of a + b is "<<a+b<<endl;
    // cout<<"The value of a - b is "<<a-b<<endl;
    // cout<<"The value of a * b is "<<a*b<<endl;
    // cout<<"The value of a / b is "<<a/b<<endl;
    // cout<<"The value of a % b is "<<a%b<<endl;


    
    // cout<<"The value of a++ is "<<a++<<endl;
    // cout<<"The value of a-- is "<<a--<<endl;
    // cout<<"The value of ++a is "<<++a<<endl;
    // cout<<"The value of --a is "<<--a<<endl;
    // cout<<"The value of a + b is "<<a+b<<endl;



    // This is are assignment operator----> use to assign values to varibale
    // int a=2;
    // char c = '2';
    // bool b = true;

    // This is all or Comparision Operators
    // cout << "this is (a==b) :"<< (a==b)<<endl;
    // cout << "this is (a!=b) :"<< (a!=b)<<endl;
    // cout << "this is (a<=b) :"<< (a<=b)<<endl;
    // cout << "this is (a>=b) :"<< (a>=b)<<endl;
    // cout << "this is (a<b) :"<< (a<b)<<endl;
    // cout << "this is (a>b) :"<< (a>b)<<endl;

//    cout<<"The value of a == b is "<<(a==b)<<endl;
//    cout<<"The value of a > b is "<<(a>b)<<endl;
//    cout<<"The value of a < b is "<<(a<b)<<endl;
//    cout<<"The value of a <= b is "<<(a<=b)<<endl;
//    cout<<"The value of a >= b is "<<(a>=b)<<endl;
//    cout<<"The value of a != b is "<<(a!=b)<<endl;
//    cout<<"The value of a == b is "<<a==b<<endl;



// This is all or Logical Operators
// cout << "this is (a==b) :"<< ((a==b)&& (a<b))<<endl;
// cout << "this is (a==b) :"<< ((a==b)||(a<b))<<endl;
// cout << "this is (a==b) :"<< (!(a<b))<<endl;

cout<<"This is value of a==b is "<<((a==b) && (a<b))<<endl; //-----/*and operator */
cout<<"This is value of a==b is "<<((a==b) || (a<b))<<endl ;//;-----/*or operator*/
cout<<"This is value of a==b is "<<(!(a<b))<<endl;//------/* not operator*/



    return 0;
}
