#include <iostream>
#include <math.h>
using namespace std;
void checkcheaperprice(int x, int y)
{
    if (x == y)
    {

        cout << "Any" << endl;

    }
    // int z = min(x,y);
    else if (x == min(x, y) )
    {

        cout << "Second" << endl;

    }
    else if (y == min(x,y))
    {

        cout << "First" << endl;
        
    } 


}                                                       

//  30 65
//  42 42
//  90 50

      
int main()
{
    // Write code  here
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        int n;
        cin >> n >> m;
        checkcheaperprice(m, n);
    }
    //  cout<<max(5,5);

    return 0;
}