// #include <iostream>
// #include <math.h>
// using namespace std;

// void reverse(int arr[], int a)
// {

//     int start = 0;
//     int end = a - 1;

//     if (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printarray(int arr[], int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int size;
//     cin >> size;

//     int arr[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     reverse(arr, size);
//     printarray(arr, size);

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        int size=t;

        int arr1[100];
        int arr2[100];
        int sum1 = 0, sum2 = 0;
        int winer = 0;
        int diff1 = 0, diff2 = 0;
        int maxled = 0;

        for (int i = 0; i <=t; i++)
        {
            cin >> arr1[i];
            cin >> arr2[i];

            sum1 = sum1 + arr1[i];
            sum2 = sum2 + arr2[i];

            if (sum1 > sum2)
            {
                diff1 = sum1 - sum2;

                if (diff1 > maxled)
                    maxled = diff1;
                winer = 1;
            }
            else
            {
                diff2 = sum2 - sum1;
                if (diff2 > maxled)
                    maxled = diff2;
                winer = 2;
            }
        }

        // TLG(arr1,t);
        cout << winer << " " << maxled << endl;
    }

    return 0;
}