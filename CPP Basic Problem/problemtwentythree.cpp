#include <iostream>

#include<cmath>

using namespace std;

int main()
{
 //write the program to calculate volume of cylinder 
 int radious ,height;

 float Volume_Of_Cylinder;

 cout<<"Enter the radious and height: ";

 cin>>radious>>height;

 Volume_Of_Cylinder = M_PI*radious*radious*height;

 cout<<"Here the Volume of Cylinder : "<<endl;

cout<<Volume_Of_Cylinder;

    return 0;
}

