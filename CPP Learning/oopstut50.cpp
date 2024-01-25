#include <iostream>
#include<fstream>
using namespace std;
// Read and write the same program and closing files 


int main() {
// // write code from here 
// // connecting our file with hout stram
// ofstream hout("samefile.txt");
// // creating a name string variable and filling it with string entered by the user
// string sample;
// cout<<"Enter your email-id: ";
// cin>>sample;
// // //writing a sting to the file 
// hout<<"The Mail id is  : "<<sample<<endl;
// // //Disconnecting our file
// hout.close();

ifstream hin("samefile.txt");
//connecting our file with hin stream

//creating a content string variable and filling it with string present there in the text file 
string content;
// hin>>content;
getline(hin,content);
cout<<"The content of the file is : "+content;

//disconnecting our file 

hin.close();
      return 0;
}