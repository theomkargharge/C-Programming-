#include <iostream>
using namespace std;
void pattern()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 0;
        while (col <= row)
        {
            cout << row * 100 +col<<" ";
            col++;
        }
        cout << endl;
        row++;
    }
}
int main()
{
    // write code from here
    pattern();

    return 0;
}