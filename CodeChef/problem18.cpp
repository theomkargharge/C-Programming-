#include <iostream>
using namespace std;
void finalpopulation(int x, int y, int z)
{
    cout << x - y + z << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        finalpopulation(x, y, z);
    }
    return 0;
}
