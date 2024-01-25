#include <iostream>
using namespace std;
void MinimumCoin(void)
{
    int x;
    cin >> x;

    if (x > 0 && x <= 9)
    {
        cout << x << endl;
    }
    if (x / 10)
    {
        cout << x % 10<<endl;
    }
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        MinimumCoin();
    }

    return 0;
}