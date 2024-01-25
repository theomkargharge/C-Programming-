#include <iostream>
using namespace std;


int main()
{
 //code 
//  What is a pointer?----> data type which holds the address of other data types
 int a =3;
 int* b = &a;

// // & ---> (Address of ) operator  

 cout<< "The Address of a is "<<&a<<endl;
 cout<<"The Address of a is "<<b<<endl;   

// //  *----> (value at) Dereference Operator

cout<<"The Value at address b is "<<*b<<endl;
//     return 0;

    // Pointer to pointer

//     int **c = &b;
//      cout<< "The Address of b is "<<&b<<endl;
//      cout<<"The Address of b is "<<c<<endl;  
// //  *----> (value at) Dereference Operator
//      cout<<"The Address of c is "<<*c<<endl;  
//     cout<<"The Value at address c then address b  is "<<**c<<endl;



// pointer 

// int a =3;
// int* b = &a;

// cout<<&a<<endl;
// cout<<b<<endl;

// cout<<*b<<endl;

// pointer to pointer 

// int a = 3;

// int* b = &a;

// int **c = &b;


// cout<<b<<endl;
// cout<<c<<endl;


// cout<<*b<<endl;
// cout<<*c<<endl;
// cout<<**c<<endl;

     
}