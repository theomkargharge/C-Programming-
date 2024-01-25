#include <iostream>
using namespace std;

void ToDoList(void)
{
    int a, count = 0;
    cin >> a;
    while (a--)
    {
        /* code */
        int d1[]={};
        cin >> d1[2000];
        // int d3[2000];
        // cin >> d3[2000];
        // int d2[2000];
        // cin >> d2[2000];

        for (int i = 0; i < 2000; i++)
        {
          if(d1[i]>=1000){
            count++;
          }
        }
    }
        cout << count << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ToDoList();
    }

    return 0;
}

