// Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

// The default constructor of the class should initialize , , and  to .

// The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.

// The copy constructor BoxBox ) should set  and  to 's  and , respectively.

// Apart from the above, the class should have  functions:

// int getLength() - Return box's length
// int getBreadth() - Return box's breadth
// int getHeight() - Return box's height
// long long CalculateVolume() - Return the volume of the box
// Overload the operator  for the class Box. Box   Box  if:

//  <
//  <  and ==
//  <  and == and ==
// Overload operator  for the class Box().
// If  is an object of class Box:

//  should print ,  and  on a single line separated by spaces.

// Box b1; // Should set b1.l = b1.b = b1.h = 0;
// Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
// b2.getLength();	// Should return 2
// b2.getBreadth(); // Should return 3
// b2.getheight();	// Should return 4
// b2.CalculateVolume(); // Should return 24
// bool x = (b1 < b2);	// Should return true based on the conditions given
// cout<<b2; // Should print 2 3 4 in order.

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// class Box{
//     int l=0;
//     int b=0;
//     int h=0;

//     public:
//     Box(int length , int breadth , int height );
//     Box(Box());

// int getLength();
// int getBreadth();
// int getHeight();
// long long CalculateVolume();
// };

// Box::Box(int length, int breadth, int height){
//     length = l;
//     breadth = b;
//     height = h;
// }
// Box:: Box(Box()){
//         cin>>l>>b>>h;
//        }

// int Box::getLength(){
//     return l;
// }
// int Box::getBreadth(){
//     return b;
// }
// int Box::getHeight(){
//     return h;
// }
// long long Box::  CalculateVolume(){
//     return l*b*h;
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//     Box b1(0,0,0) ;
//     Box b2(2,3,4);
//     b2.getLength();
//     b2.getBreadth();
//     b2.getHeight();
//     b2.CalculateVolume();
//     // bool x = (b1 < b2);
//     // cout<<b2;

//     return 0;
// }
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box {
    int l, b, h;
    public:
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    
    Box(Box& boxObject) {
        l = boxObject.l;
        b = boxObject.b;
        h = boxObject.h;
    }
    
    int getLength() {
        return l;
    }
    
    int getBreadth() {
        return b;
    }
    
    int getHeight() {
        return h;
    }
    
    long long CalculateVolume() {
        return l * 1ll * b * h;
        //return volume;
    }
    
    bool operator <(const Box& boxObject) {
        Box temp;
        if(l < boxObject.l) {
            return true;
        } else if(b < boxObject.b && l == boxObject.l) {
            return true;
        } else if(h < boxObject.h && b == boxObject.b && l == boxObject.l) {
            return true;
        }
        return false;
    }
    friend ostream& operator <<(ostream& out, Box& B);
    
};

ostream& operator <<(ostream& out, Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}