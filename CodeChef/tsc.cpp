// #include <iostream>
// using namespace std;
// void cheflandgame(void){
//     int r1,r2,r3,r4,zero=0;
//     cin>>r1>>r2>>r3>>r4;
//     if((r1==zero)&& (r2==zero) && (r3==zero) && (r4==zero)){
//         cout<<"IN"<<endl;
//     }else{
//         cout<<"OUT"<<endl;
//     }
// }

// int main() {
// //write code from here
// int t;
// cin>>t;
// while (t--)
// {
//     cheflandgame();
// }

//       return 0;

// #include <iostream>
// using namespace std;
// class FootBallCup
// {
//     int x, y;

// public:
//     void SetData()
//     {
//         int a, b;
//         x = a;
//         y = b;
//         cin >> x >> y;
//     }

//     void display(void)
//     {
//         if (x > 0 && y > 0)
//         {
//             if (x == y)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// };
// int main()
// {
//     // write code from here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         FootBallCup obj;
//         obj.SetData();
//         obj.display();
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
void ChessRating(void)
{
    int x, y, count = 0;
    int x1 = x + 8;

    if (x == y)
    {
        cout << "0" << endl;
    }
    else
    {

        /* code */

        if (x1 <= y)
        {
            count++;
            cout << count << endl;
        }

        else
        {
            if (x1 != y)
            {
                count++;
                cout << count << endl;
            }
        }
    }
}

int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        ChessRating();
    }

    return 0;
}
