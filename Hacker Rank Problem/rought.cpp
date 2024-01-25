// #include<bits/stdc++.h>

// using namespace std;
// //Implement the class Box
// class Box {
//     int l, b, h;
//     public:
//     Box() {
//         l = 0;
//         b = 0;
//         h = 0;
//     }

//     Box(int l, int b, int h) {
//         this->l = l;
//         this->b = b;
//         this->h = h;
//     }

//     Box(Box& boxObject) {
//         l = boxObject.l;
//         b = boxObject.b;
//         h = boxObject.h;
//     }

//     int getLength() {
//         return l;
//     }

//     int getBreadth() {
//         return b;
//     }

//     int getHeight() {
//         return h;
//     }

//     long long CalculateVolume() {
//         return l * 1ll * b * h;
//         //return volume;
//     }

//     bool operator <(const Box& boxObject) {
//         Box temp;
//         if(l < boxObject.l) {
//             return true;
//         } else if(b < boxObject.b && l == boxObject.l) {
//             return true;
//         } else if(h < boxObject.h && b == boxObject.b && l == boxObject.l) {
//             return true;
//         }
//         return false;
//     }
//     friend ostream& operator <<(ostream& out, Box& B);

// };

// ostream& operator <<(ostream& out, Box& B) {
//     out << B.l << " " << B.b << " " << B.h;
//     return out;
// }

// void check2()
// {
// 	int n;
// 	cin>>n;
// 	Box temp;
// 	for(int i=0;i<n;i++)
// 	{
// 		int type;
// 		cin>>type;
// 		if(type ==1)
// 		{
// 			cout<<temp<<endl;
// 		}
// 		if(type == 2)
// 		{
// 			int l,b,h;
// 			cin>>l>>b>>h;
// 			Box NewBox(l,b,h);
// 			temp=NewBox;
// 			cout<<temp<<endl;
// 		}
// 		if(type==3)
// 		{
// 			int l,b,h;
// 			cin>>l>>b>>h;
// 			Box NewBox(l,b,h);
// 			if(NewBox<temp)
// 			{
// 				cout<<"Lesser\n";
// 			}
// 			else
// 			{
// 				cout<<"Greater\n";
// 			}
// 		}
// 		if(type==4)
// 		{
// 			cout<<temp.CalculateVolume()<<endl;
// 		}
// 		if(type==5)
// 		{
// 			Box NewBox(temp);
// 			cout<<NewBox<<endl;
// 		}

// 	}
// }

// int main()
// {
// 	check2();
// }

// /* input :
// 5
// 2 3 4 5
// 4
// 5
// 4
// 2 4 6 7
//  */

// /*Output :
// 3 4 5
// 60
// 3 4 5
// 60
// 4 6 7
// */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void breakwords()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        /* code */
        if (str[i] != ',')
        {
            cout << str[i];
        }
        else
        {
            cout << endl;
        }
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    breakwords();
    return 0;
}
