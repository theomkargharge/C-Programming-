#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);

    int sumComComplex(complex, complex);
};

class complex
{
    int a, b;

    // this is the indiviual declartion of freind function

    // friend int Calculator ::sumRealComplex(complex, complex);

    // friend int Calculator ::sumComComplex(complex, complex);

    // alretrnate of declaration of freind function is to freind entire class

    friend class Calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << "  +  " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};

int Calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    // Write code  here

    complex s1, s2;
    s1.setData(2, 10);
    // s1.printNumber();

    s2.setData(5, 5);
    // s2.printNumber();

    Calculator calc;
    int res = calc.sumRealComplex(s1, s2);
    cout << "The sum of real part of ol and o2 is " << res << endl;

    int resc = calc.sumComComplex(s1, s2);
    cout << "The sum of complex part of ol and o2 is " << resc << endl;
    
    return 0;

}