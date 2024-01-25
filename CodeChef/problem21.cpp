// Problem
// Alice has scored XX marks in her test and Bob has scored YY marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.

// Input Format
// The first and only line of input contains two space-separated integers X, YX,Y — the marks of Alice and Bob respectively.
// Output Format
// For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.

// The judge is case insensitive so you may output the answer in any case. In particular YES, yes, yEsare all considered equivalent toYes`.

// Constraints
// 1 \leq X, Y \leq 1001≤X,Y≤100
// Sample 1:
// Input
// Output
// 2 1
// Yes
// Explanation:
// Alice has scored X = 2X=2 marks whereas Bob has scored Y = 1Y=1 mark. As Alice has scored twice as much as Bob (i.e. X \geq 2YX≥2Y), the answer is Yes.

// Sample 2:
// Input
// Output
// 1 2
// No
// Explanation:
// Alice has scored X = 1X=1 mark whereas Bob has scored Y = 2Y=2 marks. As Alice has not scored twice as much as Bob (i.e. X \lt 2YX<2Y), the answer is No.


#include <iostream>
using namespace std;

void HappyONot(){
    int x ,y;
    cin>>x>>y;
    if(x>=(2*y)){
        cout<<"Yes"<<endl;

    }else{
        cout<<"No"<<endl;
    }
}

int main() {
//write code from here 
  HappyONot();

      return 0;
}

