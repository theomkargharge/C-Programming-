#include <iostream>
using namespace std;
class Insertionsort
{

public:
    void insertionsort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i];
            int j = i - 1;

            for (; j >= 0; j--)
            {
                if (arr[j] > temp)
                {
                    arr[j + 1] = arr[j];
                }
            }

            arr[j + 1] = temp;
        }
    }

    void printarray(int arr[], int n);
    // {

    // }
};

void Insertionsort ::printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Insertionsort n1;
    n1.insertionsort(arr, n);
    n1.printarray(arr, n);

    return 0;
}