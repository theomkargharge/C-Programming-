// Problem
// Karan likes the number 4 very much.

// Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

// Input
// The first line of input consists of a single integer T, denoting the number of integers in Karan's list.

// Then, there are T lines, each of them contain a single integer from the list.

// Output
// Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the respective integer from Karan's list.

// Constraints
// 1 ≤ T ≤ 10^5
// (Subtask 1): 0 ≤ Numbers from the list ≤ 9 - 33 points.
// (Subtask 2): 0 ≤ Numbers from the list ≤ 109 - 67 points.
// Example
// Input:
// 5
// 447474
// 228
// 6664
// 40
// 81
// Output:
// 4
// 0
// 1
// 1
// 0

#include <iostream>
using namespace std;
// here we make a recursive function for checking four Occurance
void FourOccurance(int num)
// here we set num value
{
    // here we take two variable count =0 and reminder as rem
    int count = 0;
    int rem;
    // first we check that num should not be equal to 0 .
    while (num != 0)
    {
        // here we get the remider of num means our iteration works on num's remider so we write hrer %10

        rem = num % 10;

        //  we are check that if rem is equal to 4 or not if yes then increase the value of count by 1
        if (rem == 4)
        {
            count++;
        }
        // her we can get each number one by one so we can check if number having value of 4 or not
        num = num / 10;
    }

    // and here finally we print the value of count

    cout << count << endl;
}

int main()
{
    // Write code  here
    int t;
    // here we take t varible for testcase

    cin >> t;
    // this this is we can take input as testcase
    while (t--)
    {
        /* code */
        int a;
        // here we take a number which we want to check that how much 4 values he have

        cin >> a;
        // for that checking we can run out function that is FourOccurance
        FourOccurance(a);
    }

    return 0;
}