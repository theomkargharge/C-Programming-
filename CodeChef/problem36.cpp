#include <iostream>
#include <math.h>
using namespace std;
void CheaperCar(void)
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "ANY" << endl;
    }
    else if (x > y)
    {
        cout << "SECOND" << endl;
    }
    else
    {
        cout << "FIRST" << endl;
    }
}
int main()
{
    // write code from here
    int t;
    cin>>t;
    while (t--)
    {
    CheaperCar();
        /* code */
    }
    

    return 0;
}