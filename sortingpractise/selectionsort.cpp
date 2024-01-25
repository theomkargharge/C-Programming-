#include <iostream>
using namespace std;
class selectionsort
{

public:
    void selection(int arr[], int n);
    void printarray(int arr[], int n);
};

void selectionsort ::selection(int arr[], int n)
{
    // array element = 5 4 2 3 1
    //  indexing =     0 1 2 3 4
    
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

void selectionsort ::printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // write code from here
    int arr[5] = {5, 4, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort s;
    s.selection(arr, n);
    s.printarray(arr, n);

    return 0;
}