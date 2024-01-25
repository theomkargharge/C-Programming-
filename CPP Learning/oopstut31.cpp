// #include <iostream>
// using namespace std;
// // This is the single inheritance
// // The class derived derive form class base it means class derived is inherited form class base
// class Base{
//     int data1;
//     public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();

// };

// void Base::setData(){
//     // data1 = 10;
//     cout<<"Enter the value of data 1"<<endl;
//     cin>>data1;
//     cout<<"Enter the value of data 2"<<endl;
//     cin>>data2;

// }

// int Base :: getData1(){
//     return data1;
// }
// int Base :: getData2(){
//     return data2;
// }

// class Derived : public Base{
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void Derived :: process(){
//     data3 = data2 * getData1();
// }

// void Derived :: display(){
//     cout<<"This is the value of data1 :"<<getData1()<<endl;
//     cout<<"This is the value of data2 :"<<data2<<endl;
//     cout<<"This is the value of data3 :"<<data3<<endl;
// }

// int main() {
// //write code from here
// Derived der;
// der.setData();
// der.process();
// der.display();

// Base bs;
// bs.setData();
// bs.getData1();
// bs.getData2();

//       return 0;
// }

// #include <iostream>
// using namespace std;
// // This is the single inheritance
// // The class derived derive form class base it means class derived is inherited form class base
// class Base{
//     int data1;
//     public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();

// };

// void Base::setData(){
//     // data1 = 10;
//     cout<<"Enter the value of data 1"<<endl;
//     cin>>data1;
//     cout<<"Enter the value of data 2"<<endl;
//     cin>>data2;

// }

// int Base :: getData1(){
//     return data1;
// }
// int Base :: getData2(){
//     return data2;
// }

// class Derived : private Base{
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void Derived :: process(){
//     setData();
//     data3 = data2 * getData1();
// }

// void Derived :: display(){
//     cout<<"This is the value of data1 :"<<getData1()<<endl;
//     cout<<"This is the value of data2 :"<<data2<<endl;
//     cout<<"This is the value of data3 :"<<data3<<endl;
// }

// int main() {
// //write code from here
// Derived der;
// // der.setData();
// der.process();
// der.display();

// Base bs;
// bs.setData();
// cout<<bs.getData1()<<endl;
// cout<<bs.getData2()<<endl;

//       return 0;
// }

#include <iostream>
using namespace std;
class OmShru
{
    int a;

public:
    int b;
    void setData(void);
    int getData1();
    int getData2();
};

void OmShru ::setData()
{
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
}

int OmShru::getData1()
{
    return a;
    // cout<<b<<endl;
}
int OmShru::getData2()
{
    // cout<<a<<endl;
    return b;
}

class child : OmShru
{
    int c;

public:
    void bornbaby();
};
// class child : public OmShru{ --------> This impliment using public visibility mode

//     int c ;
//     public :
//     void bornbaby();
// };

void child ::bornbaby() //------> This is impliment using private visibility mode 
{
    setData();
    c = getData1() + b;
    cout << c;
}
int main()
{
    // write code from here
    child chl;

    chl.bornbaby();

    return 0;
}