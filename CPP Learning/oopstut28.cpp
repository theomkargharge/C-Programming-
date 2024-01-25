// Destructor
#include <iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        cout << "NO of objects created " << count << endl;
        count++;
    }

    ~num()
    {
        cout << "No of objects destroyed  " << count << endl;
        count--;
    }
};

int main()
{
    // write code from here
    num t,t1,t2,t3;

    return 0;
}