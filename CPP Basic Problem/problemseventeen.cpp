#include <iostream>
using namespace std;


int factorial(int n){
    if (n ==0){

    return 1;

    }
    else{

    return (n * factorial(n-1));

    }

}


int main()
{
 //write a program to find the factorial of the number using recursion

 int a ;
 
 cin>>a;

 cout<<factorial(a);
    
    return 0;
}