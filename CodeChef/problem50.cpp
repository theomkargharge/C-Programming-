#include <iostream>
using namespace std;

void PassorFail(void)
{
    int n, x, p, temp, temp1;
    cin >> n >> x >> p;
    temp = n - x;
    temp1 = (x * 3) - temp;
    if (temp1 >= p)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        PassorFail();
    }

    return 0;
}