#include <iostream>
using namespace std;
void but2get1free(void)
{
    int items, price;
    cin >> items >> price;

    int result = (items - (items / 3)) * price;
    cout << result << endl;
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        but2get1free();
    }

    return 0;
}