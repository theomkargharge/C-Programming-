#include <iostream>
#include <cstdlib>
using namespace std;
int sum(int a ,int b){
  return a+b;
}
int absulatedifference(int *a,int *b){
      return  abs(*a -*b);
  
}


int main()
{
 //code 
     int a=3;
     int b =4;
    int *c=&a;
    int *d=&b;

    cout<<"Sumation of a+b = "<<sum(a,b)<<endl;
    cout<<"Mod of a and b is : "<<absulatedifference(&a,&b)<<endl;

    // cout<<*d<<endl;

    return 0;
}