#include <iostream>
using namespace std;

int main()
{
//write a fizzbuzz problem 

//  condition if number is multiple of 3 print over fixx

// 2nd condtion if number is multiple of 5 print over buzz

// 3rd contion if number is multiple of both then print over fizzbuzz

int num;
cout<<"Enter the number :"<<endl;
cin>>num;
cout<<endl;
for(int i = 1;i<=num;i++){
 if(i%3==0){
    cout<<"Fizz"<<' ';
 }
 else if (i%5==0){
   cout<<"Buzz"<<" ";
 }
 else if(i%15==0){
    cout<<"FizzBuzz"<<" ";
 }
 else{
    cout<<i<<" ";
 }

}
    return 0;
}