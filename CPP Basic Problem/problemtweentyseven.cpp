#include <iostream>
using namespace std;
void  check_leap(int a){
    if(a%400==0 || a%100!=0){
        cout<<"True";
    }else{
        cout<<"False";
    }
}

int main()
{
 // Write code  here 
  check_leap(1800);
    
    return 0;
}