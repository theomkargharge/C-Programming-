#include <iostream>
using namespace std;

int main()
{
 //program to find reatest of three number
int a,b,c;
cout<<"Enter The Three Number :";
cin>>a>>b>>c;
if(a>b && a>c){
    cout<<a;
}
if(b>a && b>c){
    cout<<b;
}
else{
    cout<<c;
}

    
    return 0;
}