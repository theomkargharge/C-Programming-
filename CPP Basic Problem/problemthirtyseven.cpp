//  Write a C++ program to sum of all positive integers in a sentence. Go to the editor
// Output: 30

// hint : One effective way to convert a string object into a numeral int is to use the stoi() function
#include <iostream>
using namespace std;

void ConvertStringToInt()
{
    //
    // int n, m;
    // string s1 = " 1 ";
    // string s2 = "2";

    // n = stoi(s2);
    // m = stoi(s1);
    // stoi(s1);
    // stoi(s2);
    // cout<<(s1+s2);
    // cout << n + m;
    string Sample = "There are 12 chairs, 15 desks, 1 blackboard and 2 fans.";

//    for(int i = 0;i<=Sample.length();i++){
//     if(Sample.at(i)= '12'|| Sample.at(i)='15'|| Sample.at(i)='2'){
//         int num =i;
        // num = stoi(i)
         string s=Sample.find['12'];
//     }
//    }

    // cout<<Sample.length();

}

int main()
{
    // Write code  here
    //  string s;

    ConvertStringToInt();

    return 0;
}