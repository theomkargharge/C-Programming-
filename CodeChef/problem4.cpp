// Problem
// Chef is making a dish that consists of exactly two ingredients. He has four ingredients A, B, CA,B,C and DD with tastiness a, b, c,a,b,c, and dd respectively. He can use either AA or BB as the first ingredient and either CC or DD as the second ingredient.

// The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

// Input Format

// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first and only line of each test case contains four space-separated integers a, b, c,a,b,c, and dd — the tastiness of the four ingredients.

// Output Format
// For each test case, output on a new line the maximum possible tastiness of the dish that chef can prepare.

#include <iostream>
using namespace std;
void CheckTastiness(int a, int b, int c, int d)
{
    int tastiness_one = max(a, b);
    int tastiness_two = max(c, d);

    int result = tastiness_one + tastiness_two;

    cout << result<<endl;
}
int main()
{
    // Write code  here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, e;
        cin >> x >> y >> z >> e;
        CheckTastiness(x, y, z, e);
    }

    return 0;
}