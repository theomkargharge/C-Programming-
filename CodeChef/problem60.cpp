#include <iostream>
#include <string.h>
using namespace std;
void Counters(string arr[], int a)
{
    string s = "START38";
    string l = "LTIME108";
    int count = 0, count1 = 0;

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == s)
        {
            count++;
        }
    }

    // cout << count << endl;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == l)
        {
            count1++;
        }
    }
    cout << count << " " << count1 << endl;
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        string arr[1000];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        Counters(arr, size);
        }

    return 0;
}