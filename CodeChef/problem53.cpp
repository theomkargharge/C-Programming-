#include <iostream>
using namespace std;
void TestScore(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c % b == 0)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // write code from here

    int t;
    cin >> t;
    while (t--)
    {
        TestScore();
    }

    return 0;
}