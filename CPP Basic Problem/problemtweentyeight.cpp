#include <iostream>
using namespace std;


void hasEqualSum(int a, int b , int c){
    if( a+b == c){
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}


int main()
{
 // Write code  here 
 int a , b, c;
 cout<<"Enter the numbers to check : "<<endl;
 cin>>a>>b>>c;
 hasEqualSum(a,b,c);
    
    return 0;
}