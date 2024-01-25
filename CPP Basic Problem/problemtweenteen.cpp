#include <iostream>
using namespace std;

int main()
{
 //Write a program to print fibonacii Series 
//  0 1 1 2 3 5 7 12 ...........
int a ,t1=0,t2=1,nexterm=0;
cout<<"Enter the number : ";
cin>>a;
cout<<"Fibonacci series : " <<t1<<" "<<t2<<" ";
nexterm = t1 + t2;

while (nexterm <=a ){
  cout<<nexterm<<" ";
  t1 = t2;
  t2 = nexterm;
  nexterm = t1 + t2;


}



    
    return 0;
}



