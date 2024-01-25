#include <iostream>
using namespace std;

int main()
{
 //Write to find the factorial of the number;
 int a ,fact=1;
 cin>>a;
//  fact = a * (a-1);
for (int i = 1;i<=a;++i){

    fact =i*fact;
   
} 
    cout<<fact<<" ";
    
    return 0;
}
