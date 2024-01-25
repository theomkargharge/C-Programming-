#include <iostream>
using namespace std;

int main()
{
 //sum of digit of a number
 int a;
 cout<<"Enter the Number :";
 cin>>a>>a>>a;
 int sum=0;
 for(int i=0;i<=a;i++){
     sum=i+sum;
 }
     cout<<sum;
 
    return 0;
}