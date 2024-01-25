#include <iostream>
using namespace std;

// code
class empolyee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdat(int a1, int b1, int c1);

    void getdata()
    {
        cout << "The Value of a " << a << endl;
        cout << "The Value of b " << b << endl;
        cout << "The Value of c " << c << endl;
        cout << "The Value of d " << d << endl;
        cout << "The Value of e " << e << endl;
    }
};

void empolyee ::setdat(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{

    empolyee omdada;
    omdada.d = 36;
    omdada.e = 45;
    omdada.setdat(1, 2, 3);
    omdada.getdata();

    return 0;
}
