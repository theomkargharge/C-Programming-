#include <iostream>
using namespace std;

int main()
{
 //check year is leaf or not

 int year;
 cout<<"Enter The Year :";
 cin>>year;
 if(year %4==0){
          cout<<"The Year is Leap";
 }
 else if(year % 400==0){
          cout<<"The Year is Leap";

    }
else if(year %100 !=0){
          cout<<"The Year is Leap";

        }
 else{
    cout<<"Year is not Leap ";
 }
    
    return 0;
}