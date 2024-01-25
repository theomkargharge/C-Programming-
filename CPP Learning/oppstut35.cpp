// Excercise of inheritance given by harry bhai
#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class SimpleCalculator{
    protected:
    int a  , b;
    public:
    void operations(){
        int add1 ;
        int add2;
        a = add1;
        cout<<"Enter the value of a "<<endl;
        cin>>a;

        b = add2;
        cout<<"Enter the value of b "<<endl;
        cin>>b;

    }

    void DisplaYOperation(void){
       cout<<"This is the addition of a and b:"<<a+b<<endl;
       cout<<"This is the subtraction of a and b:"<<a-b<<endl;
       cout<<"This is the Multiplication of a and b:"<<a*b<<endl;
       cout<<"This is the Division of a and b:"<<a/b<<endl;
    }

};


class ScinetificCalculator{
protected:
    int a  , b;
    public:
    void scintificoperations(){
        int sci1 ;
        int sci2;
        a = sci1;
        cout<<"Enter the value of a "<<endl;
        cin>>a;

        b = sci2;
        cout<<"Enter the value of b "<<endl;
        cin>>b;

    }

    void DisplaYsciOperation(void){
       cout<<"This is the cos of a and b:"<<cos(a+b)<<endl;
       cout<<"This is the subtraction of a and b:"<<sin(a-b)<<endl;
       cout<<"This is the Multiplication of a and b:"<<tan(a*b)<<endl;
       cout<<"This is the Division of a and b:"<<cosf(a/b)<<endl;
    }



};

class HybridCalculatot : public SimpleCalculator,public ScinetificCalculator{
   protected:
   int hub1;
   int hub2;
   public:
   void getData(){
    int h1 ,h2;
    hub1 = h1;
    cin>>h1;
    hub2 = h2;
    cin>>h2;
   }
   void display(){
    DisplaYOperation();
    DisplaYsciOperation();
   }

};


int main() {
//write code from here 
HybridCalculatot hyb;
hyb.getData();
hyb.display();

// hyb.sethybridoperation();.
hyb.operations();
hyb.DisplaYOperation();
hyb.scintificoperations();
hyb.DisplaYsciOperation();

      return 0;
}