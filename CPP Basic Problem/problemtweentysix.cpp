#include <iostream>
using namespace std;
void to_check(int a, int b)

{
    for (int i = a; i <= b; ++i)
    {
        if (i == 1)
        {
            cout << "One" << endl;
        }
        else if (i == 2)
        {
            cout << "Two" << endl;
        }
        else if (i == 3)
        {
            cout << "Three" << endl;
        }
        else if (i == 4)
        {
            cout << "Four" << endl;
        }
        else if (i == 5)
        {
            cout << "Five" << endl;
        }
        else if (i == 6)
        {
            cout << "Six" << endl;
        }
        else if (i == 7)
        {
            cout << "Seven" << endl;
        }
        else if (i == 8)
        {
            cout << "Eight" << endl;
        }
        else if (i == 9)
        {
            cout << "Nine" << endl;
        }

        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "Even" << endl;
            }
            else
            {
                cout << "Odd" << endl;
            }
        }
        else
        {
            cout<<i<<endl;
        }
       
        }
    
    
}

int main()
{
    // Write code  here
    int i, j;
    cout << "Enter the range :" << endl;
    cin >> i >> j;
   to_check(i, j);

    return 0;
}