// #include <iostream>
// using namespace std;
// // Parametrised Constuctor
// // It can take agrguments
// // it can have 2 ways to get the output
// // one is explicit and second is implicit
// class addTwoNum{
//    int a , b;

//    public:
//      addTwoNum(void);
//      addTwoNum(int , int );

// };
// addTwoNum::addTwoNum(void){
//     cin>>a;
//     cin>>b;
//     cout<<"The Addition of a and b using default constructor :"<<a+b<<endl;
// }

// addTwoNum::addTwoNum(int x , int y){
//     a=x;
//     // cin>>a;
//     b=y;
//     // cin>>b;
//     cout<<"The addition of a and b using parameterised constructor :"<<a+b<<endl;
// }
// int main()
// {
//  // Write code  here
//  addTwoNum b; //Defult Constructor

//  addTwoNum c(2,3);//impicit method

//  addTwoNum d = addTwoNum(5,6);//explicit method

//     return 0;
// }

// One More Example of parameterised constructor
#include <iostream>
#include<math.h>
    using namespace std;
class Point2;
class Point1
{
    int x1, y1;

    friend int Distancebewtwo(Point1, Point2);

public:
    Point1(int x, int y)
    {
        x1 = x;
        y1 = y;
    }

    void displayPoint()
    {
        cout << "This is Point (" << x1 << "," << y1 << ")" << endl;
    };
};
class Point2
{

    int x2, y2;
    friend int Distancebewtwo(Point1, Point2);

public:
    Point2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    void displayPoint()
    {
        cout << "This is Point (" << x2 << "," << y2 << ")" << endl;
    }
};

int Distancebewtwo(Point1 o1 , Point2 o2){
    int s = (((o2.x2) - (o1.x1))*((o2.x2) - (o1.x1)));
    int p = (((o2.y2) - (o1.y1))*((o2.y2) - (o1.y1)));
    int q = s+p;
    // cout<<q;
    cout<<sqrt(q);
}

int main()
{
    // Write code  here
    Point1 om(1,0);
    om.displayPoint();
    Point2 sru(70,0);
    sru.displayPoint();

    Distancebewtwo(om, sru);

    return 0;
}