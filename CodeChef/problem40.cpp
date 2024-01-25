#include <iostream>
using namespace std;

void PaperCutting(void)
{
    int n, k;
    cin >> n >> k;

    if ((k * k) == 1)
    {
        cout << (n * n) << endl;
    }
    else if ((n * n) / (k * k) == 1)
    {
        cout << 1 << endl;
    }

    else if ((n * n) > (k * k))
    {
        cout << (k * k) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        PaperCutting();
    }

    return 0;
}