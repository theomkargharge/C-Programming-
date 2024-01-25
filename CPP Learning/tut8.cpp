// #include <iostream>
// using namespace std;

// int sum(int a,int b){
//     int c =a+b;
//     return c;
// }

// // This will not swap a and b 
// void swap(int a ,int b){
//     int temp = a;
//      a = b;
//      b= temp;

// }

// // Call by reference using pointer
// void swapPointer(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


// // Call by reference using C++ reference Variables 
// int & swapReferenceVar(int &a, int &b){
//     int temp =a;
//     a = b;
//     b= temp;
     
//     return a;
// }

// // void  swapReferenceVar(int &a, int &b){
// //                      //temp  a  b
// //     int temp =a;     //  4   4  5
// //     a = b;           //  4   5  5
// //     b= temp;         //  4   5  4   
     
// //     // return a;
// // }


// int main()
// {
//  //code 
//  int x=4,y=5;

// //  cout <<"The Sum of 4 and 5 is : "<<sum(x,y);
// cout<<"The Value of x is "<<x<<"and the value of y is :"<<y<<endl;
// // swap(x,y); //This will not swap a and b
// // swapPointer(&x,&y); //This will swap a and b using pointer reference 
// //swapReferenceVar(x,y)=6; //call by reference
//  swapReferenceVar(x,y) ;//This will swap a and b using reference varibles
// cout<<"The value of x is : "<<x<<"and the value of y is: "<<y<<endl;

    
//     return 0;
// }




#include <iostream>
using namespace std;

int sum(int a ,int b ){
  int  c = a+b;
    return c;
}


void swapp(int a ,int b){
  int  temp = a;
    a = b;
    b = temp;
}
// call by pointer reference
void swappoineterreference(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//call by cpp reference 

void swapcppreference(int &a ,int &b){
    int temp = a ;
    a = b;
    b = temp;
}


// int & swapcppreference(int &a ,int &b){
//     int temp = a ;
//     a = b;
//     b = temp;

//      return a ;

// }

int main()
{
 // Write code  here 
    int x = 4,y = 5;

    // cout<<sum(x,y);

    cout<<x<<" "<<y<<endl;
    //  swap(x,y); // This is not working 
    swappoineterreference(&x,&y);
     // This is call reference by pointer refernce 
    swapcppreference(x,y);
     //This is call reference using  cpp reference 
    cout<<x<<" "<<y<<endl;

    return 0;
}