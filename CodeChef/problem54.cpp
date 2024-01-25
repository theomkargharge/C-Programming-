#include <iostream>
#include <string.h>
using namespace std;
void Wordle(void)
{
    string s1, s2, S3;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {

        // break;
        if (s1[i] == s2[i])
        {
            S3 += "G";
           
        }
        else
        {
            S3 += "B";
          
        }
    }
    cout << S3 << endl;
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        Wordle();
    }

    return 0;
}