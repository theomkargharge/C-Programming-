#include <iostream>
using namespace std;
int SmallFactorial(int n)
{
    // cin>>n;
    if (n > 1)
    {
        return n * SmallFactorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;

        cout << SmallFactorial(s) << endl;
    }

    return 0;
}