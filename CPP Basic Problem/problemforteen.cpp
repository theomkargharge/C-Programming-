#include <iostream>
using namespace std;

int main()
{
 //Write a program the swap the two numbers without using the third variables
 int a ,b;
 cin>>a>>b;
// swap(a,b);
// cout<<a<<" "<<b;

a = a + b;
b = a - b;
a = a - b;
cout<<a<<" "<<b;
 
    
    return 0;
}