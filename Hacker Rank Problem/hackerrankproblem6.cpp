// // Input Format

// // The overloaded operator + should receive two complex numbers (a+ib and c+id) as parameters. It must return a single complex number.

// // The overloaded operator << should add "a+ib" to the stream where  is the real part a and b is the imaginary part of the complex number which is then passed as a parameter to the overloaded operator.

// // Output Format

// // As per the problem statement, for the output, print "a+ib" followed by a newline where a=c.a andb= c.b

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;
//     string o="+i";

// public:
//     void setData()
//     {
//         int v1;
//         int v2;
//         a = v1;
//         b = v2;
//     cin >> a >>o>>b;
//     // getline(cin ,o )  ;
//     //  cout <<a<<o<<b<< endl;

//     }
//     void printdata()
//     {
//         cout <<a<<o<<b<< endl;
//     }
//     void add(complex o1, complex o2);
// };
// void complex::add(complex o1, complex o2)
// {

//     a = o1.a + o2.a;
//     b = o1.b + o2.b;
// }

// int main()
// {
//     // Write code  here
//     complex om, sm, as;

//     om.setData();
//     om.printdata();
//     sm.setData();
//     sm.printdata();
//     as.add(om, sm);
//     as.printdata();

//     // sm.add(om,sm);

//     return 0;
// }
// // #include<iostream>

// // using namespace std;

// // class Complex
// // {
// // public:
// //     int a,b;
// //     void input(string s)
// //     {
// //         int v1=0;
// //         int i=0;
// //         while(s[i]!='+')
// //         {
// //             v1=v1*10+s[i]-'0';
// //             i++;
// //         }
// //         while(s[i]==' ' || s[i]=='+'||s[i]=='i')
// //         {
// //             i++;
// //         }
// //         int v2=0;
// //         while(i<s.length())
// //         {
// //             v2=v2*10+s[i]-'0';
// //             i++;
// //         }
// //         a=v1;
// //         b=v2;
// //     }
// // };
// // Complex &operator+(Complex &lhs,Complex &rhs){
// //     lhs.a += rhs.a;
// //     lhs.b += rhs.b;
// //     return lhs;
// // }
// // ostream &operator<<(ostream &os,const Complex &rhs){
// //     os << rhs.a << "+i" << rhs.b;
// //     return os;
// // }
// // //Overload operators + and << for the class complex
// // //+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
// // //<< should print a complex number in the format "a+ib"

// // int main()
// // {
// //     Complex x,y;
// //     string s1,s2;
// //     cin>>s1;
// //     cin>>s2;
// //     x.input(s1);
// //     y.input(s2);
// //     Complex z=x+y;
// //     cout<<z<<endl;
// // }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     // Write code  here
//     int a;
//     int b;
//     int c;
//     string strng,strng1,strng2;
//     strng = "24";
//     strng1 = "7";
//     strng2 = "6";
//     a = stoi(strng);
//     b = stoi(strng1);
//     c = stoi(strng2);
//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;
//     return 0;
// }