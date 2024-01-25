#include <iostream>
using namespace std;
// This is ambiguity solving ambiguity means if more than one class have same funtion name then this is the solution of ambiguity 
// we can sovle it using :: (scope resolution operataor) simply we can speciy in drived class which function should get access
/* Example : 
class Dervied :public base1 ,public base2{
    string om;
    public: 
    void getplace(){
        
       base1::getplace();
       base2::getplace();
       cout<<"Enter the string of Derived class : "<<endl;
       string somthing ;
        somthing = om;
        cin>>om;
    }
    void Display(){
        base1::Display();
        base2::Display();
        cout<<"This is the Email ID : "<<om<<endl;
    }
};
This is how we can resolve the ambiguity in problem or in inheritance

*/
class base1{
    string a ;
    public:
    void getplace( ){
        string y;
        a = y;
        cout<<"Enter the String for base1 : "<<endl;
        cin>>a;
    }
    void Display(void){
        cout<<"This is the Name  : "<<a<<endl;
    }
};
class base2{
    string b ;
    public : 
    void getplace(){
        string s;
        b = s;
        cout<<"Enter the String for base2 : "<<endl;
        cin>>b;
    }
    void Display(void){
        cout<<"This is the Last Name : "<<b<<endl;
    }
};

class Dervied :public base1 ,public base2{
    string om;
    public:
    void getplace(){
        
       base1::getplace();
       base2::getplace();
       cout<<"Enter the string of Derived class : "<<endl;
       string somthing ;
        somthing = om;
        cin>>om;
    }
    void Display(){
        base1::Display();
        base2::Display();
        cout<<"This is the Email ID : "<<om<<endl;
    }
};
 
int main() {
//write code from here 
Dervied D;
D.getplace();
D.Display();

      return 0;
}

/*This is example of hybrid which it can be we need to create class base and inherite two classes from base and the usign this two class we can inherite another class this method is known as hybrid in inheritance which is also called hybrid inheritance
*/
// Hybrid Example 

// #include <iostream>
// using namespace std;
// class Papa{
//     string s ;
//     public:
//     void setdata1(){
//         string power;
//         s = power;
        
//         cin>>s;
//     }
//     void getDAta1(void){
//       cout<<"This is the main feture of my grand father : "<<s<<endl;
//     }
// };

// class ME : public Papa{
//     string O;
//     public:
//     void setdata2(){
//     string attitude;
//     O = attitude;
//     cin>>O;
//     }
//     void getData2(){
//         cout<<"This is the Quality which is come from class Papa : "<<O<<endl;
//     }
// };

// class shubham  : public Papa{
//     string S;
//     public:
//     void Setdata3(){
//      string Strength;
//      S = Strength;
//      cin>>S;
//     }
//     void getData3(){
//         cout<<"This the quality of shubham which come from papa : "<<S<<endl;
//     }

// };

// class OurChild : public ME , public shubham{
//   string C;
//   public:
//   void SetData4(){
//     string allCapabilites;
//     C = allCapabilites;
//     cin>>C;
//   }
//   void getData(){
//     cout<<"This is the qualities of OurChild Which  come from ME and Shubham  :"<<C<<endl;
//   }
  
// };

// int main() {
// //write code from here 
// // cout<<"the is omkar"<<endl;

// OurChild ch;
// ch.setdata2();
// ch.getData2();
// ch.Setdata3();
// ch.getData3();
// ch.SetData4();
// ch.getData();

//       return 0;
// }