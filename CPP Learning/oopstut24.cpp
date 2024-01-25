#include <iostream>
using namespace std;

class complex
{
private:
    /* data */
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;

        // cout<<a<<b<<endl;
    }
    complex(int x, int y)
    {
       a = x;
       b = y;

        // cout<<x<<y<<endl;
    }
    complex(int x)
    {
        a = x;
        b = 0;

        // cout<<a<<b<<endl;
    }

    void printNumber()
    {
        cout << "This is the complex  value a and b  "<< a<<" + i "<<b << endl;
    }
};

int main()
{
    // write code from here
    complex c1;
    c1.printNumber();
    complex c2(2, 6);
    c2.printNumber();
    complex c3(5);
    c3.printNumber();

    return 0;
}
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main ()
// {
//     char str[500];
//     int count = 0, i; 
//     // cout << "Enter a string : ";
//     gets(str);
//     for (i = 0; str[i] != '\0';i++)
//     {
//         if (str[i] == ' ')
//             count++;    
//     }
//     cout << count + 1;
//     return 0;
// }