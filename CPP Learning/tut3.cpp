#include <iostream>
#include <iomanip>
using namespace std;
 int main(){

    //  *************Precedance and Associaty-- if same precedance
    //  int a,b,c;
    //   a=((5*-5)+6);
    //    cout<<a <<endl;

    //    b=((((5/5)*5)+5)-5);
    //    cout<<b<<endl;

// ********Manipulator****
// int a,b,c;
// a=10;
// b=123;
// c=1234;
// cout<<setw(5)<<a<<endl;
// cout<<setw(4)<<b<<endl;
// cout<<setw(4)<<c<<endl;

// ********constant  *******
// if const declare to a variable then it cannot be change 
// int a =45;
// const int b =65;
// a =96;
// // b=97;
// cout<<a<<endl;
// cout<<b<<endl;




// pecendence 

// int a;

// a= ((((5/5)*5)+5)-5);

// cout<<a;



// Manipulator 

// int s = '*';


// cout<<setw(5)<<"*"<<setw(5)<<endl;
// cout<<setw(4)<<" * * "<<setw(4)<<endl;
// cout<<setw(3)<<" * * * "<<setw(3)<<endl;
// cout<<setw(2)<<" * * * * "<<setw(2)<<endl;
// cout<<setw(1)<<" * * * * * * "<<setw(1)<<endl;



// constant 

// int a = 5;
// const int a = 6;
// cout<<a;
// cout <<a;






int age ;
cout<<"Enter your age :";
cin>>age;


// if (age < 18){
//     cout<<"You are not eligible for vote  !";
// }
// else if (age == 18){
//     cout<<"You are just 1 year left to vote ";
// }
// else{
//     cout<<"Your are eligible for vote and do vote it's your right .!";
// }


switch (age)
{
case 18 :
if(age < 18){

cout<<"Your not eligible";
}else
cout<<"your are 18 ";
    /* code */
    break;
case 20:
cout<<"your are 20 ";
    /* code */
    break;
case 21 :
cout<<"your are 21 ";
    /* code */
break;

// default:
// cout<<"I Love Programming ";
    break;
}

 }