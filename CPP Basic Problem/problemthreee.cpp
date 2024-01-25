#include <iostream>
using namespace std;

int main()
{
 //sum of first n natural numbers
 int n ;
 cout<<"Enter The Number :";
 cin>>n;
 int sum = 0;
 if(n>0){
   for (int i=1;i<=n;i++){
    sum = i + sum;
   }
     cout<<sum;
 }
    
    return 0;
}