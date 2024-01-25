// Object Oriented Programming in C++
#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int, int, int);
    void getData();
};

void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void employee ::getData()
{
    {
        cout << "The Value of a: " << a << endl;
        cout << "The Value of b: " << b << endl;
        cout << "The Value of c: " << c << endl;
        cout << "The Value of d: " << d << endl;
        cout << "The Value of e: " << e << endl;
    }
}
int main()
{
    // Write code  here

    employee Om;
    Om.d = 45;
    Om.e = 54;
    Om.setData(1, 4, 3);
    Om.getData();

    return 0;
}