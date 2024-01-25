// C++ Program to raise any number X to power N

#include <iostream>
using namespace std;
int power(){
    int power= 1;

    int base; 
    cin>>base;
    int exponent;
    cin>>exponent;


    for(int i = 1;i<=exponent; i++){
        power = power * base;

        return power;
    }



}
int main() {
//write code from here 
cout<<power();

      return 0;
}