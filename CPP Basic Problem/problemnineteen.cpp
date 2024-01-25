#include <iostream>
#include <string.h>
#include<algorithm>

using namespace std;

int main()
{
 //Write the program to reverse the number 
 string a;
 cout<<"Enter the String :"<<endl;
 cin>>a;

reverse(a.begin(),a.end());
cout<<"This is reveres of String:"<<endl;
cout<<a<<endl;
    
    return 0;
}
