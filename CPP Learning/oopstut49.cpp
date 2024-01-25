#include <iostream>
#include <fstream> //it having inbuild to object ifstream for input of file which means reading of the string  and ofstream for output of file means writing of the string
using namespace std;
// input and output file in cpp using fstream header file 

int main() {
//write code from here 
// string st="Omkar Gharge is placed in Microsoft.! very Congratulations to have this big type of achivement .! very bright future ahead sir.!";
// //this for wirte the file here we take fstream object like out and we give it to out object and using of it we can write the file
// ofstream out("Simple60.txt");
// out<<st;



//now we can take input of file means we can read the file 

string st1;
ifstream in("Simple60B.txt");
in>>st1;//this is not give complete string
//use getline funtion to print complete string
ifstream in1("Simple60.txt");
getline(in,st1) ;
cout<<st1<<endl;
// in1>>st;
// getline(in1,st);
// cout<<st;





      return 0;
}