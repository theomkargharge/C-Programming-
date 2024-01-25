#include <iostream>
#include <math.h>
using namespace std;
void ScoreHigh(void)
{
    int n;
    cin >> n;

    int NA, NB, NC, ND;
    cin >> NA >> NB >> NC >> ND;
    if ((NA + NB + NC + ND) == n)
    {
        int s = max(ND, NB);
        int p = max(NA, NC);
        cout << max(s, p) << endl;
    }

    // cout<<max(NA,NB,NC,ND)<<endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ScoreHigh();
    }
    return 0;
}
