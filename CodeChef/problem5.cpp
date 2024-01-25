// Problem
// Kulyash stays in room that has a single bulb and NN buttons. The bulb is initially on.

// The initial states of the buttons are stored in a binary string SS of length NN — if S_iS
// i
// ​
//   is 00, the ii-th button is off, and if S_iS
// i
// ​
//   is 11, the ii-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.

// Kulyash has toggled some buttons and the Final states of the buttons are stored in another binary string RR of length NN. He asks you to determine the Final state of the bulb.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of three lines of input.
// The first line of each test case contains an integer NN — the number of buttons.
// The second line of each test case contains a binary string SS — the initial states of the buttons.
// The third line of each test case contains a binary string RR — the Final states of the buttons.
// Output Format
// For each test case, output on a new line the Final state of the bulb (00 for off and 11 for on).

// input
// 2
// 3
// 000
// 001
// 2
// 00
// 11

// output
// 0
// 1

// Explanation:
// Test case 11: All the buttons are initially off and finally the state of only one button has changed so the state of the bulb reverses once i.e. it turns off.

// Test case 22: All the buttons are initially off and finally the states of two buttons have changed so the state of the bulb reverses twice i.e. it remains on.

#include <iostream>
#include <string.h>
using namespace std;

int CheckOnOrOffBuld(int m)
{    int start;
     int end;
     cin>>start;
     string Intial ;
     cin>>Intial;
   
    cin>>end;
    string Final;
    cin>>Final;

    

    cin >> Intial;

    cin >> Final;

 
  
    


}

int main()
{
    // Write code  here
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m;
        // function
        CheckOnOrOffBuld(m);
    }

    return 0;
}