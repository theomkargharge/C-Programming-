// code for squarepattern like :
// ****
// ****      <---Output
// ****
// ****

#include <iostream>
using namespace std;
void squarepattern()
{
    int x;
    cin >> x;
    // cin>>y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <x; j++)
        {
            /* code */
        cout << "*";
        }
        cout<<endl;
        
    
    }
}

int main()
{
    // write code from here
    squarepattern();

    return 0;
}