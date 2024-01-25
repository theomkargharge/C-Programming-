/*
1.Not in the scope of class
2.Since it is not in the scope of the class, it cannot be called from the object of that class ,c1.sumComplex() == Invalid

3.Can be invoked without the help of any object
4.Usually contains the objects as aguments
5.Can be declared inside public or private section of the class
6.It cannot access the members directly by the names and object_name.member_name to access any number


*/
// Friend functions in c++;y == min(x,y)

#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex SumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << "  +  " << b << "i" << endl;
    }
};

Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    // Write code  here
    Complex c1, c2, c3, sum;
    c1.setNumber(2, 5);
    c1.printNumber();

    c2.setNumber(5, 2);
    c2.printNumber();

    sum = SumComplex(c1, c2);
    sum.printNumber();

    return 0;
}