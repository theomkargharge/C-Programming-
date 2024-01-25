#include <iostream>
#include<cmath>
using namespace std;

int main()
{
 //write a program to find volume of sphere 
float volume_of_sphere,radious;
 cout<<"Enter the radious: "<<endl;
 cin>>radious;



//  volume_of_sphere=((4/3) * (22/7) *(radious*radious*radious));
volume_of_sphere=(4*3.14*radious*radious*radious)/3;


 cout<<"Here the Volume of sphere : "<<volume_of_sphere<<" ";
    
    return 0;
}