#include <iostream>
using namespace std;
void WaitingTime(void)
{
    int K = 1, X;
    cin >> K >> X;

    for (int i = K; i <=K; i++)
    {
        cout << ((i * 7) - X) << endl;
    }

}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while ((t--))
    {
        WaitingTime();
    }

    return 0;
}