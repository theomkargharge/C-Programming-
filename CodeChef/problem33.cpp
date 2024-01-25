#include <iostream>
using namespace std;
template <class T1, class T2, class T3, class T4>
class BuildingRace
{
    T1 a;
    T2 b;
    T3 c;
    T4 d;

public:
    BuildingRace()
    {
        T1 x;
        T2 y;
        T3 z;
        T4 s;

        a = x;
        b = y;
        c = z;
        d = s;

        cin >> a >> b >> c >> d;
    }
    void Display(void)
    {
        int p, q;
        p = a / c;
        q = b / d;
        if (p == q)
        {
            cout << "Both" << endl;
        }
        else if (p > q)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Chef" << endl;
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
        BuildingRace<int, int, int, int> obj;
        obj.Display();
    }

    return 0;
}