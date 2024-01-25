// #include <iostream>
// #include <random>
// #include<time.h>
// using namespace std;

// void findRandomNumber(){

//     // srand(time(0));
//     cout<<rand();

// }
// int main() {
// //write code from here
// findRandomNumber();

//       return 0;
// }

#include <iostream>
using namespace std;

// C++ Program to Find Size of int, float, double and char
class findSize
{
    int a;
    float b;
    double d;
    char c;

    public:
    findSize(){}
    findSize(int integeR, int floating , int doublev, int chars){
      
      a = integeR;
      cout<<"This is Size of int "<<sizeof(a)<<endl;
      b = floating;
      cout<<"This is Size pf float "<<sizeof(b)<<endl;
      d = doublev;
      cout<<"This is Size of Double "<<sizeof(d)<<endl;
      c = chars;
      cout<<"This is Size of Chars "<<sizeof(c)<<endl;

    }
};
int main()
{
    // write code from here

    // findSize chek;
    int a;
    cin>>a;
    float b;
    cin>>b;
    double d;
    cin>>d;
    char c ;
    cin>>c;
    findSize chek = findSize(a,b,c,d);
    

    
    

    return 0;
}