#include <iostream>
using namespace std;

int main()
{
 //check if number is positive or negative take number from user 
 int n ;
 cout<<"Enter the Number :";
 cin>>n;
    if(n==0){
        cout<<"Number is Zero";
    }
 else{
    

    if(n>0){
        cout<<"Number is Postive";
    }
    else{
        cout<<"Number is Negative";
    }
 }
    
    return 0;
}