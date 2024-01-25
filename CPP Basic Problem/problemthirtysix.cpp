#include <iostream>
using namespace std;

void CheckWhichSeason(int a){
    cout<<"Enter The Month Number: "<<endl;
    cin>>a;
/*
1= jan
2 = feb 
3 = march
4 = april
5 = may
6= june 
7 = july
8 = augest
9 = sep 
10 = oct
11 = nov 
12 = dec
Given an integer A which represents a month.
Find the season according to the month.
Spring – March to May
Summer – June to August
Autumn – September to November
Winter – December to February
If the month is out of the range 1 to 12 output should be “Invalid”.
*/


if(a>=3 && a<=5){
    cout<<"Spring"<<endl;

}
else if(a>=6 && a<=8 ){
    cout<<"Summer"<<endl;
}
else if (a>=9 && a<=11){
    cout<<"Autum"<<endl;
}
else if (a>=1 && a<=12){
    cout<<"Winter"<<endl;
}
else{
    cout<<"Invalid"<<endl;
}

}

int main()
{
 // Write code  here 
 int a;


 CheckWhichSeason(a);
    
    return 0;
}