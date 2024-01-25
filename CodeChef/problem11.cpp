#include <iostream>
using namespace std;
void CRED(int a){
   int num = 750;

    if(a == num || a > num){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main()
{
 // Write code  here 
  int a;
  cin>>a;
  CRED(a);   
    return 0;
}