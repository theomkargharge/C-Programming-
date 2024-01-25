#include <iostream>
using namespace std;

int main()
{
 //Write a Program to create calculator using switch statement

 int a ,b;
 cout<<"Enter Two Numbers : ";
 cin>>a>>b;
 
 cout<<"Please Select Method : "<<endl;
 cout<<"Addition : 1"<<endl;
 cout<<"Substraction : 2"<<endl;
 cout<<"Division : 3"<<endl;
 cout<<"Multiplication : 4"<<endl;
 cout<<"Modulous : 5"<<endl;
 
 int C;
 cin>>C;
 cout<<"You Selcet this One : "<<C<<endl;
  
switch (C)
{
case 1:
cout<<"Here the addition is :"<<a+b<<endl;
break;
case 2:
cout<<"Here the Substraction is :"<<a-b<<endl;
break;
case 3:
cout<<"Here the Division is :"<<a+b<<endl;

break;
case 4:
cout<<"Here the Multiplication is :"<<a+b<<endl;

break;
case 5:
cout<<"Here the Modoulous is :"<<a+b<<endl;

    break;

default:
cout<<"Plese Select Above Method ^";
    break;
}


    
    return 0;
}