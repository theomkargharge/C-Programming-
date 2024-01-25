#include <iostream>
#include <math.h>
using namespace std;
void NearestCourt(void)
{
    int x, y, z, t1, t2;
    cin >> x >> y;
    z = (x + y) / 2;
    t1 = (x - z);
    t2 = (y - z);
    cout << max(t1, t2) << endl;
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        NearestCourt();
    }

    return 0;
}