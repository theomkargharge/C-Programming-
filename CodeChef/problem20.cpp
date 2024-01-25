// Problem
// In Chefland, a tennis game involves 44 referees.
// Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

// Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input containing 44 integers R_1, R_2, R_3, R_4R
// 1
// ​
//  ,R
// 2
// ​
//  ,R
// 3
// ​
//  ,R
// 4
// ​
//   denoting the decision of the respective referees.
// Here RR can be either 00 or 11 where 00 would denote that the referee considered the ball to be inside limits whereas 11 denotes that they consider it to be outside limits.

// Output Format
// For each test case, output IN if the ball is considered to be inside limits by all referees and OUT otherwise.

// The checker is case-insensitive so answers like in, In, and IN would be considered the same.

// Constraints
// 1 \leq T \leq 201≤T≤20
// 0 \leq R_1, R_2, R_3, R_4 \leq 10≤R
// 1
// ​
//  ,R
// 2
// ​
//  ,R
// 3
// ​
//  ,R
// 4
// ​
//  ≤1
// Sample 1:
// Input
// Output
// 4
// 1 1 0 0
// 0 0 0 0
// 0 0 0 1
// 1 1 1 1
// OUT
// IN
// OUT
// OUT
// Explanation:
// Test case 11: Referees 11 and 22 do not consider the ball to be IN. Thus, the ball is OUT.

// Test case 22: All referees consider the ball to be IN. Thus, the ball is IN.

// Test case 33: Referee 44 does not consider the ball to be IN. Thus, the ball is OUT.

// Test case 44: No referee considers the ball to be IN. Thus, the ball is OUT.
#include <iostream>
using namespace std;
void CheflandGames()
{
    int R1, R2, R3, R4;
    cin >> R1 >> R2 >> R3 >> R4;

    if (R1 == 0)
    {
        if (R2 == 0)
        {
            if (R3 == 0)
            {
                if (R4 == 0)
                {
                    cout << "In" << endl;
                    
                }
                else
                    {
                        cout << "OUT" << endl;
                    }
            }
        }
    }
else{
    cout<<"OUT"<<endl;
}
}
int main()
{
    // write code from here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        CheflandGames();
    }

    return 0;
}