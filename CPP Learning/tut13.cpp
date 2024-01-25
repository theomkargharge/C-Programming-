// Method overloading in cpp
// overloading means a multiple function can have same name

// let see the example

#include <iostream>
using namespace std;

// sum of two number
int sum(int a, int b)
{
    return (a + b);
}

// Sum of three number
int sum(int a, int b, int c)
{
    return (a + b + c);
}

// Volume of cube
int volume(int a)
{
    // cout << "The Volume of cube is :" << endl;
    return (a * a * a);
}

// Volume of cylinder is
int volume(int r, int h)
{
    // cout << "The Volume of Cylinder  is :" << endl;

    return (3.14 * r * r * h);
}

// Volume of Reactangular box
int volume(int l, int b, int h)
{
    // cout << "The Volume of Reactangular  is :" << endl;

    return (l * b * h);
}

int main()
{
    // Write code  here

    // The sum of Two number is
    cout << "The sum of 3 and 4 is " << sum(3, 4) << endl;

    // The sum of Three number is

    cout << "The sum of 3 and 4 and 5 is " << sum(3, 4, 5) << endl;

    // From here the code of volumes

    //  volume of cube

    cout << "The volume of cube " << volume(5)<<endl;

    // volume of cylinder

    cout << "The volume of cyclinder " << volume(5, 4)<<endl;

    // volume of reactangular box

    cout << "The volume of Reactangular " << volume(3, 4, 5)<<endl;

    return 0;
}