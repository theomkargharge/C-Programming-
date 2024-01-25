#include <iostream>
using namespace std;
// Pointer to objects and Arrow Operator in cpp
class Complex{
    int real , imaginary;
    public:
    void GetData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void SetData(int a , int  b){
        real  = a ;
        imaginary = b;
    }
};
int main() {
//write code from here 
// Complex cm;
// // Complex* ptr = &cm;
// cm.SetData(4,5);
// cm.GetData();


// This is dynamically we can use the pointer to object
Complex cm;
Complex* ptr = &cm;
(*ptr).SetData(4,5);
(*ptr).GetData();

// now to derefrense to the object value we use arrow opperator
// Complex cm;
// Complex* ptr = &cm;
Complex *tr = new Complex;
tr->SetData(40,50);
tr->GetData();
      return 0;
}