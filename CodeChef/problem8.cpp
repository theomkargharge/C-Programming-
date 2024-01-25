/* Problem
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US.

Calculate Pooja's account balance after an attempted transaction.

Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

Output
Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance */

    // Write code  here
    //  int a , b;
    //  cin>>a>>b;
    //  cout<<ATM(a,b);
// float ATM(int Mon, float Bal)
// {
//     // while(Bal > Mon){
// }
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.precision(2);

//     int Mon;
//     float Bal;
//     cin>>Mon>>Bal;

//     if ((Mon % 5 == 0) && ((Bal > Mon)))
//     {

//         cout << ((Bal - Mon) - 0.50);
//     }
//     else
//     {

//         cout << (Bal);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a;
    float b;
    cin >> a >> b;
    
    if ((a%5==0) && (b-a-0.5>=0))
    {
        cout << fixed << b-a-0.5 << endl;
    }
    else
    {
        cout << fixed << b << endl;
    }
    //  if ((Mon % 5 == 0) && ((Bal > Mon)))
    // {

    //     cout << ((Bal - Mon) - 0.50)<<endl;
    // }
    // else
    // {

    //     cout << (Bal)<<endl;
    // }

    return 0;
}
