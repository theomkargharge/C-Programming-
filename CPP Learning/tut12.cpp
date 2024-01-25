// Rerursion in cpp 

#include <iostream>
using namespace std;

// Recursion means that the function that can call itself for ex: Factorial ,fib series 

// This is fib series using recursion function 
int fib(int n ){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);

}

// The is Factorial of any number using recursion Function 
int factorial(int n){
    if(n<=1){
        return n;
    }
    return n*factorial(n-1);
}


int main()
{
 // Write code  here 
//  int a ;
//  cout<<"Enter The Number to be Fact : "<<endl;
//  cin>>a;
//  cout<<factorial(a);
 int x ;
 cout<<"Enter The Number  : "<<endl;
 cin>>x;
 cout<<fib(x);
    return 0;
}