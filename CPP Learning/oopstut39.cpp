#include <iostream>
using namespace std;
// Initialization list in constructors in cpp
class test{
    int a ;
    int b;
    public:
    // test(int i , int j):a(i),b(j){
    // test(int i , int j):a(i),b(j+i)
    // test(int i , int j):a(i),b(j*2)
    // test(int i , int j):a(i),b(a+j)
    // test(int i , int j):b(j),a(i+b)---> RED flag this will create problem becuse a will br initialized first 
    test(int i,int j):a(i)
    {
        b = j;
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;

    }
};

int main() {
//write code from here 
test t(24,10);


      return 0;
}