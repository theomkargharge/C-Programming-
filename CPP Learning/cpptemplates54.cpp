#include <iostream>
using namespace std;
// templates with multiple parameters
/*
templates(class T1 , class T2)
class  nameofclass{
    //code
}
*/

template <class T1, class T2>
class myclass
{

    T1 a;
    T1 b;
    T2 c;
    T2 d;

public:
    myclass()
    {
        T1 x;
        T1 y;
        T2 p;
        T2 q;
        a = x;
        b = y;
        c = p;
        d = q;
        cout << "Enter the value : " << endl;
        cin >> a >> b >> c >> d;
    }
    void display(void)
    {
        cout << "This are the value of a b c d :" << endl;
        cout << "The value of a : " << this->a << endl
             << "The value of a : " << this->b << endl
             << "The value of a : " << this->c << endl
             << "The value of a : " << this->d << endl;
        cout << "This the iteration of all the values : " << endl;

        cout << ((a + b) * (c + d)) << endl;
    }
};

int main()
{
    // write code from here
    // myclass<int, int> o;
    // o.display();

    // myclass<float, int> b;
    // b.display();

    // myclass<float, float> c;
    // c.display();

    myclass<double, double> c;
    c.display();
    
    


    return 0;
}