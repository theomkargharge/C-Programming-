// #include <iostream>
// using namespace std;
// // this pointer in cpp
// // this pointer use when class members and local member has same name to avoid confusion to know which the class variable and which is the local variable and from which the class member to be invoked to local member
// // return this pointer is use to return the object of the class function

// class A{
//     int a ;
//     public:
// void SetData(int a){
// a = a; // This gives the garbage value of a beacuse first priority is local varible and here there is no any relation of class variable to avoid this we use this pointer it looks like (this->)
// this ->a=a;

//     //}
//         // Now we move to return the object using this pointer we can use refrence method to get object of the class A
//        A& SetData(int a){
//          this->a=a;
//          return *this;
//         }
//     void PrintData(void){
//         cout<<"This is the value of a: "<<a<<endl;
//     }
// };
// int main() {
// //write code from here
// A a;
// a.SetData(10);
// a.PrintData();

// // here we can get the return the object using reutrn this pointer
// a.SetData(40).PrintData();
//       return 0;
// }

// #include<iostream>
// using namespace std;

// class Test
// {
// private:
// int x;
// public:
// Test(int x = 0) { this->x = x; }
// void change(Test *t) { this== t; }
// void print() { cout << "x = " << x << endl; }
// };

// int main()
// {
// Test obj(5);
// Test *ptr = new Test (10);
// obj.change(ptr);
// obj.print();
// return 0;
// }

// #include<iostream>
// using namespace std;

// class Test
// {
// private:
// int x;
// int y;
// public:
// Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
// static void fun1() { cout << "Inside fun1()"; }
// static void fun2() { cout << "Inside fun2()"; this->fun1(); }
// };

// int main()
// {
// Test obj;
// obj.fun2();
// return 0;
// }

// #include<iostream>
// using namespace std;

// class Test
// {
// private:
// int x;
// int y;
// public:
// Test (int x = 0, int y = 0) { this->x = x; this->y = y; }
// Test setX(int a) { x = a; return *this; }
// Test setY(int b) { y = b; return *this; }
// void print() { cout << "x = " << x << " y = " << y << endl; }
// };

// int main()
// {
// Test obj1;
// obj1.setX(10).setY(20);
// obj1.print();
// return 0;
// }

// #include<iostream>
// using namespace std;

// class Test
// {
// private:
// int x;
// int y;
// public:
// Test(int x = 2, int y = 4) { this->x = x; this->y = y; }
// void setX(int a) { x = a;
// a=2;
// }
// void setY(int b) { y = b;
// b=2;
//  }
// void destroy() { delete this; }
// void print() { cout << "x = " << x << " y = " << y << endl; }
// };

// int main()
// {
// Test obj;
// obj.destroy();
// obj.print();
// return 0;
// }

#include <iostream>
using namespace std;

class This
{
    int x;
    int y;

public:
    This(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    This &setData(int a)
    {
        x = a;
        return *this;

        
    }
    This SetData(int b){
        y= b;
    }
    void printData(void){
        cout<<"This the value of a: "<<x<<endl<<" This is the value of y: "<<y<<endl;
    }
};

int main()
{
    // write code from here
    This obj;
    obj.setData(4).SetData(5);
    obj.printData();


    return 0;
}