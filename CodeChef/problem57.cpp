#include <iostream>
#include<math.h>
using namespace std;
//rearrange 


void Multipleof5()
{
    int t;
    cin >> t;
    int n;
    cin >> n;

    
    while (t--)
    {
        if (n % 5 == 0)
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            cout << "No" << endl;
            break;
        }
    }
}

int main()
{
    // your code goes here
    int y;
    cin >> y;
    while (y--)
    {
        Multipleof5();
    }
    return 0;
}


