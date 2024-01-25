#include <iostream>
using namespace std;

int main()
{
 //find sum of the numbers in a given range 
 int a,b;
 cout<<"Enter the number Two Number :";
 cin>>a>>b;
 int range=0;
 for (int i=a;i<=b;i++){
     range=range+i;
 }
cout<<range;

    
    return 0;
}