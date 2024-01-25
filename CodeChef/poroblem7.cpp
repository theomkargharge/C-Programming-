// Problem
// Chef is watching TV. The current volume of the TV is XX. Pressing the volume up button of the TV remote increases the volume by 11 while pressing the volume down button decreases the volume by 11. Chef wants to change the volume from XX to YY. Find the minimum number of button presses required to do so.

// Input Format
// The first line contains a single integer TT - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers XX and YY - the initial volume and final volume of the TV.
// Output Format
// For each test case, output the minimum number of times Chef has to press a button to change the volume from XX to YY.

// Constraints
// 1 \leq T \leq 1001≤T≤100
// 1 \leq X, Y \leq 1001≤X,Y≤100
// Sample 1:
// 2              4
// 50 54          2
// 12 10
#include <iostream>
using namespace std;
void VolumeControl(int a, int b)
{
    // int d;
    int c;
    if (a > b)
    {
        c = a - b;
        cout << c << endl;
    }else{
        c = b - a;
        
        cout<< c<<endl;
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
        int a, b;
        cin >> a >> b;
        VolumeControl(a, b);
    }

    return 0;
}