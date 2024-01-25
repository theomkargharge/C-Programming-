#include <iostream>
using namespace std;

class Table
{
    int number;

public:
    int result;
    void SetTable(void);
    void FormTable(void);
    void DisplayTable(void);
};

void Table ::SetTable(void)
{
    cout << "Enter the Number : " << endl;
    cin >> number;
    // result++;
}
void Table ::FormTable(void)
{
    for (int i = 1; i <= 10; ++i)
    {
        result = number * i;
        cout << "The Table of : "<<number<<" is " << result << endl;
    }
}
void Table::DisplayTable(void)
{
    // cout << "The Table is :" << result << endl;
    cout<<endl;
}

int main()
{
    // Write code  here 
    Table two;
    two.SetTable();
    two.FormTable();
     two.DisplayTable();

    return 0;
}