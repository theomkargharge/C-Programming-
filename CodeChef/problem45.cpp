#include <iostream>
using namespace std;
void SugarcaneJuiceBusiness(void)
{
    int n;
    cin >> n;
    int total_income = n * 50;
    int sugarcane = 0.2 * total_income;
    int salt_mint = 0.2 * total_income;
    int shop_rent = 0.3 * total_income;
    cout << (total_income - (sugarcane + salt_mint + shop_rent)) << endl;
    // cout << sugarcane << endl;
    // cout << salt << endl;
    // cout << rent << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        SugarcaneJuiceBusiness();
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// //write code from here
// cout<<(10/(100*80))<<endl;
// cout<<(80%20)<<endl;

//       return 0;
// }