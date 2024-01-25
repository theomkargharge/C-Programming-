#include <bits/stdc++.h>
using namespace std;

// 5 4 3 2 1
// 0 1 2 3 4
class BubbleSort
{

public:
    void Bubble(int arr[],int n);
    void PrintArray(int arr[], int n);
};

void BubbleSort ::Bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void BubbleSort ::PrintArray(int arr[], int n)
{
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    int arr[5] = {5, 4, 6, 3, 1};

    BubbleSort s;
    s.Bubble(arr,5);
    s.PrintArray(arr,5);

    return 0;
}