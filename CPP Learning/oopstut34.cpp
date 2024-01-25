#include <iostream>
using namespace std;
/*Inheritance in Multiple inheritance
syntax : class drived : visibility mode base 1, visiblity mode base 2 */
class Base1
{
protected:
    int base1int;

public:
   void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base 1 is : " << base1int << endl;
        cout << "Ths value of Base 2 is : " << base2int << endl;
        cout << "The sum of these values is :" << (base1int + base2int) << endl;
    }
};

int main()
{
    // write code from here
    Derived omkar;
    omkar.set_base1int(45);
    omkar.set_base2int(45);
    omkar.show();

    return 0;
}