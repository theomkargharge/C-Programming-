// #include <iostream>
// using namespace std;

// // function prototype
// int find_fizzbuzz(int);

// int main()
// {
//  // Write code  here
//  int x ;
//  cout<<"Enter Number : "<<endl;
//  cin>>x;
//  cout<<find_fizzbuzz(x);

//     return 0;
// }

// int find_fizzbuzz(int a ){
//     for(int a=1;i<=a;i++){
//         if(i%3==0)
//         cout <<"fizz"<<" ";
//         else if (i%5==0)
//         cout<<"buzz"<<" ";
//         else if (i%15==0)
//         cout<<"Fizzbuzz"<<" ";
//         else
//         cout<<i<<" ";
//     }
// }

// call referecne by pointer

// #include <iostream>
// using namespace std;

// void Swaping(int *a ,int *b){
//     int temp = *a;
//     *a = *b ;
//     *b = temp;
// }

// int main()
// {
//  // Write code  here
//     int x, y;
//     cin>>x>>y;
//     cout<<"The value of x is "<<x<<"The value of y is "<<y<<endl;
//     Swaping(&x,&y);
//     cout<<"The value of x is "<<x<<"The value of y is "<<y<<endl;
//     return 0;
// }

// call reference by cpp referene
// #include <iostream>
// using namespace std;

// // void Swaping (int &a,int&b){
// //     int temp = a ;
// //     a = b;
// //     b = temp;
// // }

// int & Swaping (int &a,int&b){
//     int temp = a ;
//     a = b;
//     b = temp;
//     return a ;
// }
// int main()
// {
//  // Write code  here

//  int a , b;
//  cin>>a;
//  cout<<endl;
// cin>>b;

// cout<<"The value of a is "<<a<<"The value of b is "<<b<<endl;
// Swaping(a,b) = 3;
// cout<<"The value of a is "<<a<<"The value of b is "<<b<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //  This is use of inline function
// // it is use and maintaied for speed up the excutoin of program and if the program is having small thing to excution

// inline int sum(int a ,int b ){
//     int c = a + b;
//     return c;
// }

// int main()
// {
//  // Write code  here

//  int x, y;

//  cin>>x>>y;

//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;
//  cout<<sum(x,y)<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//  // Write code  here
//     int a;
//     cout<<"Entet the number :"<<endl;
//     cin>>a;
//     if (a < 0){
//         cout<<"The number is negative"<<endl;
//     }else{
//         cout<<"The Number is Positive"<<endl;
//     }
//     return 0;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// /*
//     add code for struct here.
// */

// struct data{
//     int age;
//     string firstname;
//     string lastname;
//     int standard;

// };

// int main() {
//    int a,b;
//    string fisrtname,lastname;

//    cin>>a;
//    cin>>fisrtname;
//    cin>>lastname;
//    cin>>b;

//    struct data om1k;
//    om1k.age = a;
//    om1k.firstname = fisrtname;
//    om1k.lastname = lastname;
//    om1k.standard = b;

//    cout<<om1k.age<<" "<<om1k.firstname<<" "<<om1k.lastname<<" "<<om1k.standard;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool Check_dog_bark(int a, bool b )
// {
//     if (true && a < 0)
//     {
//         return true;
//     }
//     else if (true && a < 8)
//     {

//         return true;
//     }
//     else if (true && a == 23)
//     {

//         return true;
//     }
//     else if (false && a < 0)
//     {
//         return false;
//     }
//     else if (false && a < 8)
//     {

//         return false;
//     }
//     else if (false && a < 23)
//     {

//         return false;
//     }
// }

// int main()
// {
//     // Write code  here

//     cout << Check_dog_bark(true, -1);
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// bool reverse_number(int b)
// {
//     while (b != 0)
//     {
//         int remainder = b % 10;
//         int reversed_number = reversed_number * 10 + remainder;
//         b /= 10;

//     }
//    cout<<reverse_number;
// }

// void cheak_palindrom1e(int a)
// {

//     if (a == reverse_number(a))
//     {
//         cout << "This is Palindrom1e" << endl;
//     }
//     else
//     {
//         cout << "This is not Palindrom1e" << endl;
//     }
// }

// int main()
// {
//     // Write code  here
//     int a;
//     cout << "Enter the number :" << endl;
//     cin >> a;
//     // cheak_palindrom1e(a);
//     cout<<reverse_number(a);

//     return 0;
// // }

// #include <iostream>
// #include <string.h>

// using namespace std;

// class Lovee
// {

// private:
//     string Shrutii;

// public:
//     string other_girls;

//     void setData(string om1);
//     void getData();
// };

// void Lovee ::setData(string om1)
// {
//     Shrutia= om1;
// }
// void Lovee ::getData()
// {
//     cout << "Mine Special One ❤" << Shrutia<< endl;
//     cout << endl
//          << endl;
//     cout << "Not This OK 😒 " << other_girls << endl;
// }

// int main()
// {
//     // Write code  here
//     Lovee forever;
//     forever.other_girls = ("Bye Bye..🥱");
//     forever.setData("Shrutiii🧡 om1kar ");
//     forever.getData();

//     return 0;

// #include <iostream>
// using namespace std;

// void print_int_to_char(int a)
// {
//     // for (int a= 0; a<= a; i++)
//     // {
//         if (a== 0 )
//         {
//             cout << "Zero"<<" ";

//         }
//         if (a== 1 )
//         {
//             cout << "One"<<" ";
//             // break;
//         }
//         if (a== 2 )
//         {
//             cout << "Two"<<" ";
//             // break;
//         }
//         if (a== 3)
//         {
//             cout << "Three"<<" ";
//             //    brea/k;
//         }
//         if (a== 4)
//         {
//             cout << "Four"<<" ";
//             //  break;
//         }
//         if (a== 5)
//         {
//             cout << "Five"<<" ";
//             //    break;
//         }
//         if (a== 6)
//         {
//             cout << "Six"<<" ";
//             // break;
//         }
//         if (a== 7)
//         {
//             cout << "Seven"<<" ";
//             // break;

//         }

//         if (a== 8)
//         {
//             cout << "Eight"<<" ";
//             // break;

//         }
//         if (a==9 )
//         {
//             cout << "NIne"<<" ";
//             // break;

//         }
//         if (a== 10)
//         {
//             cout << "Ten"<<" ";
//             // break;

//         }
//         // else{
//         //     cout<<i<<" ";
//         // }
//     }

// int main()
// {
//     // Write code  here

//     int a;
//     cout<<"Enter the number  :"<<endl;
//     cin>>a;
//     print_int_to_char(a);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Shop
// {
//     int itemid[100];
//     int itemprice[100];
//     int counter;

// public:
//     void intiCounter(void) { counter = 0; }
//     void SetPrice(void)
//     {
//         cout << "Enter Id Your Item no " << counter + 1 << endl;
//         cin >> itemid[counter];
//         cout << "Enter Price of your item" << endl;
//         cin >> itemprice[counter];
//         counter++;
//     }
//     void DisplayPrice(void)
//     {
//         for (int i = 0; i <= counter; i++)
//         {

//             cout << " The Price of item with Id : " << itemid[i]<<" is "<<itemprice[i]<<endl;
//         }
//     }
// };

// int main()
// {
//     // Write code  here
//     Shop dukan;
//     dukan.intiCounter();
//     dukan.SetPrice();
//     // dukan.DisplayPrice();
//     dukan.SetPrice();
//     dukan.DisplayPrice();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class employee
// {
//     int id;

//     // static
//     static int count;

// public:
//     void setData(void);
//     void getData(void);
// };

// int employee ::count;

// void employee ::setData(void)
// {
//     cout << "Enter the id " << endl;
//     cin >> id;
//     count++;
// }

// void employee ::getData(void)
// {
//     cout << "The id of this employee is " << id << "And this is employee number  " << count << endl;
// }

// int main()
// {
//     // Write code  here

//     employee n1, n2;

//     n1.setData();
//     n1.getData();

//     n2.setData();
//     n2.getData();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Addition
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void printnumber()
//     {
//         cout << "Your Number  a is " << a << endl;
//         cout << "Your Number  b is " << b << endl;
//     }
//     void setDataBySum(Addition o1)
//     {
//         int sum = o1.a + o1.b;
//         cout << "This is the Addition of a and b : " << sum << endl;
//         sum = o1.a - o1.b;
//         cout << "This is the Substraction of a and b : " << sum << endl;
//         sum = o1.a * o1.b;
//         cout << "This is the Multiplication of a and b : " << sum << endl;
//         sum = o1.a / o1.b;
//         cout << "This is the Division of a and b : " << sum << endl;
//         sum = o1.a % o1.b;
//         cout << "This is the Modlous of a and b : " << sum << endl;
//     }
// };

// int main()
// {
//     // Write code  here
//     Addition a1, sum;
//     a1.setData(2, 5);
//     a1.printnumber();

//     sum.setDataBySum(a1);
//     // sum.printnumber();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class SumOfNumber
// {
//     int a;
//     int b;

// public:
//     friend SumOfNumber dosum(SumOfNumber o1,SumOfNumber o2 );
//     void SetData(int x, int y)
//     {
//         a = x;
//         b = y;

//     }

//     void getData(void){
//         cout << "Enter the number 1st: " << endl;
//         cin >> a;
//         cout << "Enter the number 2nd :" << endl;
//         cin >> b;
//     }

//     void printnumber(){
//         cout<<"This is your number 1 "<<a<<"This is your number 2 "<<b<<endl;
//     }

// };

//  SumOfNumber dosum(SumOfNumber o1,SumOfNumber o2){
//     o2.SetData((o1.a+o1.b));
//  };

// int main()
// {
//     // Write code  here

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Com1plex;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumRealCom1plex(Com1plex, Com1plex);

//     int sumCom1Com1plex(Com1plex, Com1plex);
// };

// class Com1plex{
//     int a , b;
//     // friend int Calculator :: sumCom1Com1plex(Com1plex , Com1plex);
//     // friend int Calculator:: sumRealCom1plex (Com1plex , Com1plex);
//      friend class Calculator;
//     public:
//     void SetData(int v1, int v2){
//         a = v1;
//         b = v2;
//     }
//     void printnUmber(){
//         cout<<"This is the value of a "<<a<<" This is the value of b "<<b<<endl;
//     }
// };
// int Calculator::sumCom1Com1plex(Com1plex o1,Com1plex o2){
//     return (o1.b + o2.b);
// }

// int Calculator::sumRealCom1plex(Com1plex o1,Com1plex o2){
//     return (o1.a + o2.a);
// }
// int main()
// {
//     // Write code  here

//     Com1plex Shruti,om1kar;
//     Shruti.SetData(2,5);
//     Shruti.printnUmber();
//     om1kar.SetData(1,4);
//     om1kar.printnUmber();

//     Calculator clac;
//     int res = clac.sumCom1Com1plex(Shruti , om1kar);
//     cout<<"This is the com1bination of Com1plex part : "<<res<<endl;
//     res = clac.sumRealCom1plex(Shruti,om1kar);
//     cout<<"This is the Addition of Real part :"<<res<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Com1plex
// {
// private:
//     /* data */
//     int a, b;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     friend Com1plex sumcom1plex(Com1plex o1, Com1plex o2);
//     void printNumber()
//     {
//         cout << "Your numbre is " << a << "+i" << b << endl;
//     }
// };

// Com1plex sumcom1plex(Com1plex o1, Com1plex o2)
// {
//     Com1plex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }
// int main()
// {
//     // Write code  here
//     Com1plex c1, c2, c3, sum;

//     c1.setNumber(2, 6);
//     c1.printNumber();

//     c2.setNumber(3, 6);
//     c2.printNumber();

//     sum=sumcom1plex(c1, c2);
//     sum.printNumber();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Swaping
// {
//     int a, b;

//   public:
//             void setData1()
//             {
//                 int c;
//                 int d;
//                 c = a;
//                 cin>>c;
//                 d = b;
//                 cin>>d;
//             };
//             // void setData2( d);
//             friend Swaping ActualSwaping(Swaping o1);
//             void printSwapingdata();
// };

// // void Swaping::setData1(int c, int d)

// // void Swaping ::setData2(int d)
// // {
// //     //  c = a;
// //     d = b;
// // }

// Swaping ActualSwaping(Swaping o1)
// {

//     int temp = o1.a;
//     o1.a = o1.b;
//     o1.b = temp;
// }

// void Swaping::printSwapingdata()
// {
//     cout << "This is the value of a :" << a << endl;
//     cout << "This is the value of b :" << b << endl;
// }

// int main()
// {
//     // Write code  here
//     Swaping om1, shr;
//     om1.setData1();
//     om1.printSwapingdata();
//     shr = ActualSwaping(om1);
//     shr.printSwapingdata();

//     return 0;
// }
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //  // Write code  here
// //     cout<<"This is number"<<endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class Y;
// class X{
//    int a;
//    friend void ADD(X ,Y);

//    public :
//    void setData(int data ){
//     a= data;
//    }

// };
// class Y{
//     int v;

//     public:
//     void setData(int value){
//         v=value;
//     }
//     friend void ADD(X,Y);
// };

//  void ADD(X o1, Y o2){
//   cout<<"This is the addition of X and Y Objects that are gives me "<<o1.a+o2.v;
// }

// int main()
// {
//  // Write code  here
//  X O ,s;
//  O.setData(105);
//  Y M;
//  M.setData(550);

//  ADD(O,M);

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Y;
// class X{
//    int a;
//    friend void swap(X& ,Y&);

//    public :
//    void setData(int data ){
//     a = data;
//    }

//    void printNumber(){
//     cout<<"This is the value of a :"<<a<<endl;
//    }

// };
// class Y{
//     int v;

//     public:
//     void setData(int value){
//         v=value;
//     }
//    void printNumber(){
//     cout<<"This is value of V :"<<v<<endl;
//    }
//     friend void swap(X&,Y&);
// };

//  void swap(X &data, Y &value){
//   int temp = data.a;
//   data.a = value.v;
//   value.v = temp;

//   cout<<"This is the Swap value of a :"<<data.a<<endl;
//   cout<<"This is the Swap value of a :"<<value.v<<endl;

// }

// int main()
// {
//  // Write code  here
//  X O ,s ;
//  O.setData(105);
//  O.printNumber();

//  Y M;
//  M.setData(550);
//  M.printNumber();

//  swap(O,M);

//     return 0;
// }

// hybrid inheritance
/*I need to create one base class then from this i need to inherit the two derived class after this i need to inherited anothe class using this two derived class this inheritance called hybrid inheritance*/

#include <iostream>
using namespace std;

template <class Boss>

class minmax

{
public:
      Boss Min;
      Boss Max;
      Boss char1;
      Boss char2;
      // minmax(Boss a, Boss b)
      // {
      //       Min = a;
      //       Max = b;
      // }
      // minmax  display(void)
      // {
      //       if (Min > Max)
      //       {
      //             cout << "Here min is greater than max : " << Min << endl;
      //       }
      //       else
      //       {
      //             //      cout<<b<<endl;
      //             cout << "Here max is greater than min : " << Max << endl;
      //       }
      // }
      minmax(Boss c, Boss d)
      {
            char1 = c;
            char2 = d;
      }
      void display1(void)
      {
            if (char1 > char2)
            {
                  cout << "Here char1 is greater than char2 : " << char1 << endl;
            }
            else
            {
                  //      cout<<b<<endl;
                  cout << "Here char2 is greater than char1 : " << char2 << endl;
            }
      }
};

int main()
{
      // write code from here

      // minmax<float> v1(4.5, 5.2);
      // v1.display();

      minmax <char> v2('c','d');
      v2.display1();

      return 0;
}