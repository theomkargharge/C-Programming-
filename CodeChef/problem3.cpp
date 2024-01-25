// Recently Chef joined a new company. In this company, the employees have to work for XX hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for YY hours (Y \lt X)(Y<X) on Friday. Saturdays and Sundays are holidays.

// Determine the total number of working hours in one week.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space-separated integers XX and YY — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.

// Output Format
// For each test case, output the total number of working hours in one week.

// sample 1 :
// 3
// 10 5
// 12 2
// 8 7

// output
// 45
// 50
// 39

// Explanation:
// Test case 11: The total number of working hours in a week are: 10 \texttt{(Monday)} + 10 \texttt{(Tuesday)} + 10 \texttt{(Wednesday)} + 10 \texttt{(Thursday)} + 5 \texttt{(Friday)} = 4510(Monday)+10(Tuesday)+10(Wednesday)+10(Thursday)+5(Friday)=45

#include <iostream>
using namespace std;
// int weaks;
void CheckWorkInHours(int x, int y)
{
    int result;
    int monday = 1, tuesday = 1, wednesday = 1, thursday = 1, friday = 1;
    result = (x * (monday)) + (x * (tuesday)) + (x * (wednesday)) + (x * (thursday)) + ((y * friday));
    if (x > y)
    {
        cout << result;
    }
}

int main()
{
    // Write code  here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        int y;
        cin >> x >> y;

        CheckWorkInHours(x, y);
    }

    return 0;
}