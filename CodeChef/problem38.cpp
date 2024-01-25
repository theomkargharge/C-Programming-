#include <iostream>
using namespace std;
void Balance(void)
{
    int currentbalnce, fixedDeposit, deductedamount, month;
    cin >> currentbalnce >> fixedDeposit >> deductedamount >> month;

    int x = (fixedDeposit - deductedamount);
    int final = ((currentbalnce + x * month));
    cout << final;
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        Balance();
    }

    return 0;
}