#include <iostream>
using namespace std;
// Revisiting Pointers :New and delete Keywords in cpp 


int main() {
//write code from here  
// normal pointer initialization
int a = 4;

int* ptr = &a;  //----->& store the address of a
*ptr = 999;
cout<<"The value of a is "<<*(ptr)<<endl;

// Dynamic initilization of Pointers
int *p = new int(40);
cout<<"The value of dynamic initlized pointer p is "<<*p<<endl;


// We can also use this in to initilized array
int *arr = new int[3];
arr[0]= 10;
arr[1]= 20;
arr[2]= 30;
delete arr; //---> now it not neccessory to give the value correct which is initilized in array
cout<<"The value of arr[0] is "<<arr[0]<<endl;
cout<<"The value of arr[1] is "<<arr[1]<<endl;
cout<<"The value of arr[2] is "<<arr[2]<<endl;


      return 0;
}