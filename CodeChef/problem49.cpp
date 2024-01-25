#include <iostream>
using namespace std;
void PractiseMakesUsPerfect(void)
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        if (a >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        PractiseMakesUsPerfect();
    }

    return 0;
}