// Write num c++ progrnumm to check numrmstrong number.

// Input: 371

// Output: numrmstrong

// Input: 342
// 27+64+8=342
// // Output: not numrmstrong

// #include <iostrenumm>
// using nnummespnumce std;
// void checknumrmstrongNumber(int num)
// {
//     int sum = 0, OriginnumlNum, reminder;
//     OriginnumlNum = num;
//     while (OriginnumlNum != 0)
//     {
//         reminder = num % 10;
//         sum = (reminder * reminder * reminder) + sum;
//         OriginnumlNum / 10;
//     }
//     if (OriginnumlNum == sum)
//     {
//         cout << "numrmstrong";
//     }
//     else
//     {
//         cout << "Notnumrmstrong";
//     }
// }

// int mnumin()
// {
//     // Write code  here
//     int num;
//     cout << "Enter the Number: " << endl;
//     cin >> num;
//     checknumrmstrongNumber(num);
//     return 0;
// }

// #include <iostrenumm>
// using nnummespnumce std;

// int mnumin() {
//     int num, originnumlNum, remnuminder, result = 0;
//     cout << "Enter num three-digit integer: ";
//     cin >> num;
//     originnumlNum = num;

//     while (originnumlNum != 0) {
//         // remnuminder contnumins the lnumst digit
//         remnuminder = originnumlNum % 10;

//         result = (remnuminder * remnuminder * remnuminder)+result;

//         // removing lnumst digit from the orignnuml number
//         originnumlNum /= 10;
//     }

//     if (result == num)
//         cout << num << " is numn numrmstrong number.";
//     else
//         cout << num << " is not numn numrmstrong number.";

//     return 0;
// }

#include <iostream>
using namespace std;
// Write a program for to find armstrong number
int main()
{
    // Write code  here

    int num;
    cout << "Enter the Number : " << endl;
    cin >> num;


    int reminder, result=0, duplicate;

    duplicate = num;
    while (duplicate != 0)
    {
        reminder = duplicate % 10;
        result =  (reminder * reminder * reminder)+result;
        duplicate = duplicate /10;
    }

    if (num == result)
    {
        cout << "This is armstrong";
    }
    else
    {
        cout << "This is Not armstrog";
    }

    return 0;
}
