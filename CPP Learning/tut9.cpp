// // Inline functions

// #include <iostream>
// using namespace std;

// inline float mul(float a ,float b){
//     return (a*b);
// }

// inline double div (double  x ,double  y){
//     return (x/y);
// }

// int main()
// {
//  //code
//  float a =12.36;
//  float b=2.014;

// double x =210.36445;
// double y=251.0222;

//  cout<<mul(a,b)<<endl;
//  cout<<div(x,y)<<endl;

//     return 0;
// }

// //  Default Arguments
// #include <iostream>
// using namespace std;

// inline int product(int a, int b)
// {
//     // Not recommended to use below lines with inline functions
//     // static int c=0; // This executes only once
//     // c = c + 1; // Next time this function is run, the value of c will be retained
//     return a * b;
// }

// float moneyReceived(int currentMoney, float factor = 1.04)
// {
//     return currentMoney * factor;
// }
// int strlen(const char *p){

// }

// int main()
// {
//     int a, b;
//     // cout<<"Enter the value of a and b"<<endl;
//     // cin>>a>>b;
//     // cout<<"The product of a and b is "<<product(a,b)<<endl;
//     int money = 100000;
//     cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl;
//     cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << " Rs after 1 year";
//     return 0;
// }

// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//  //code

//  float amount;
//  float value(float p,int n,float r=0.15);  // prototype
//  void printline(char ch='*',int len=40);   //prototype

//  printline();         //use default values for arguments

//  amount = value(5000,00,5);   //defualt for 3rd arguments

// cout<<"\n Final Value = "<<amount<<"\n \n";

// amount = value(10000.000,5,0.30); //pass all arguments explicitly

// cout<<"\n Final Value = "<<amount<<"\n \n";

// printline('=');  //use default value for second arguments

// getch();
// return 0;

//     return 0;

// }

// float value(float p,int n,float r){
//     int year =1;
//     float sum =p;

//     while (year<=n)
//     {
//         sum = sum*(1+r);
//         year = year +1;

//     }return (sum);

// }
// void printline(char ch,int len){
//     for(int i=1;i<=len;i++){
//         printf("%c",ch);
//         printf("\n");
//     }
// }

// contsants Arguments

// #include <iostream>
// using namespace std;

//  int strlent(const char *p){
//      cout<<p;

//  }

// int main()
// {
//  //code
// //  int *t = &'b';
// //   cout<<strlent(*t);

//     return 0;
// }

// recursion




#include <iostream>
using namespace std;
// // Use Inline Fucntion For the Speed up the funtion execution;
// // inline int products (int a ,int b ){
// //     return a*b;
// // }

// // if static function in use the we not going to use inline function it's not a good practice 
int products (int a ,int b ){
    static int c = 2;
    c = c + 1;
    return a*b+c;
}


// float moneyreceived(int money , float intrest = 1.04){
//     return money * intrest;
// }

int main()
{
//  // Write code  here 

 int x, y;
 cin>>x>>y;
 cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
// //  cout<<"The Product is :"<<products(x,y)<<endl;
 


// int x, y;
//  cin>>x>>y;

//  cout<<moneyreceived(x,y)<<endl;
//  cout<<moneyreceived(x,1.2)<<endl;

//     return 0;
}
