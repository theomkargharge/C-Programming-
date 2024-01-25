#include <iostream>
using namespace std;

int main()
{
 //code 
    int a ,b, temp;
    cout<<"Enter The Number For Swapping;";
    cin >>a>>b;
    
    temp = a;
    a= b;
    b= temp;
  
    cout<<"Here the ans i.e Swap: "<<a<<" "<<b;


    return 0;
}