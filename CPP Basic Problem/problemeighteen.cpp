#include <iostream>
using namespace std;

int main()
{
 //Write the program to reverse the number 
 int a,reverse=0;
 cin>>a;

while(a !=0){
    int reminder = a % 10;
    reverse = reverse * 10 + reminder;
    a = a / 10;
}
 cout<<reverse;
    
    return 0;
}

