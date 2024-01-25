#include <iostream>
using namespace std;
template <class T1, class T2>
class Minimumpizzas
{
    T1 a;
    T2 b;

public:
    void SetData()
    {
        T1 x;
        T2 y;

        a = x;
        b = y;

        cin >> a >> b;
    }

    void Display()
    {
        int produ;
        produ = (a * b);

        if (produ % 4 == 0)
        {
            cout << (produ / 4) << endl;
        }
        else
        {
            cout << (produ / 4) + 1 << endl;
        }
    }
};
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        Minimumpizzas <int , int >obj;
        obj.SetData();
        obj.Display();
    }

    return 0;
}