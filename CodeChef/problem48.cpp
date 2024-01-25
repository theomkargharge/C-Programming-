#include <iostream>
using namespace std;
void Determinethewinner(void)
{
    int pa, pb, qa, qb;
    cin >> pa >> pb >> qa >> qb;

    if ((pa == qa) && (pb == qb) || (pa == qb))
    {
        cout << "TIE" << endl;
    }
    else if (pa < qa)
    {
        cout << "Q" << endl;
    }
    else
    {
        cout << "P" << endl;
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        Determinethewinner();
    }
    return 0;
}
