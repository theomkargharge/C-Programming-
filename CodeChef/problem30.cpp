// #include <iostream>

// // this is inclusion of string
// #include <string.h>
// using namespace std;
// void complementary()
// {
//     // int a is size of string
//     int a;

//     // s is a string
//     string s;

//     // size of string
//     cin >> a;
//     while (--a)
//     {
//         /* code */
//         // input of string
//         cin >> s;
//         for (int i = 0; i < s.length(); i++)

//         {
//             /* code */
//             // checking each charater of string
//             if (s.at(i) == 'A')
//             {
//                 cout << 'T';
//             }
//             else if (s.at(i) == 'T')
//             {
//                 cout <<  'A';
//                 // cout<<endl;
//             }
//             else if (s.at(i) == 'C')
//             {
//                 cout <<  'G';
//                 // cout<<endl;
//             }
//             else if (s.at(i) == 'G')
//             {
//                 cout <<'C';
//                 // cout<<endl;
//             }
//         }
//     }
//     cout << endl;
// }

// int main()
// {

//     // number of test cases
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // calling function
//         complementary();
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
void HappyString()
{
    string s = "aeiou";
    string c;
    cin >> c;
    int count = 0;

    for (int i = 1; i < c.length(); i++)
    {

        if (((c.at(i) == 'a') || (c.at(i) == 'e') || (c.at(i) == 'i') || (c.at(i) == 'o') || (c.at(i) == 'u')))
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "Happy" << endl;
        // break;
    }
    else
    {
        cout << "Sad" << endl;
        // break;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        HappyString();
    }

    return 0;
}
