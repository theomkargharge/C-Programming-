// Write a c++ program to convert number in characters.

// Input: 74254

// Output:Seven Four Two Five Four

// Input: 203

// Output: two zero three

#include <iostream>
#include <string.h>
using namespace std;

void ConvertNumberInChar(string a)
{
    cout << "Enter the number :" << endl;
    cin >> a;

    for (int i = 0; i <= a.length(); i++)
    {
        if (a.at(i) == '1')
        {
            cout << "One"
                 << " ";
            // exit(0);
        }
        if (a.at(i) == '2')
        {
            cout << "Two"
                 << " ";
        }
        if (a.at(i) == '3')
        {
            cout << "Three"
                 << " ";
        }
        if (a.at(i) == '4')
        {
            cout << "Four"
                 << " ";
        }
        if (a.at(i) == '5')
        {
            cout << "Five"
                 << " ";
        }
        if (a.at(i) == '6')
        {
            cout << "Six"
                 << " ";
        }
        if (a.at(i) == '7')
        {
            cout << "Seven"
                 << " ";
        }
        if (a.at(i) == '8')
        {
            cout << "Eight"
                 << " ";
        }
        if (a.at(i) == '9')
        {
            cout << "Nine"
                 << " ";
        }
        if (a.at(i) == '10')
        {
            cout << "Ten"
                 << " ";
            exit(0);
        }
    }
}

int main()
{
    // Write code  here

    string a;
    ConvertNumberInChar(a);

    return 0;
}