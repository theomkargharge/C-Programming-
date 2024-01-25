#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

//file input output in cpp :open() and eof()


int main() {
//write code from here 
// string st="This is harry";
//declaring an object of the type ofstream
// ofstream out;
//connecting the object out to the text file using the member function open()
// out.open("samefile.txt");
//writing to the file 
// out<<"Omkar Ghrge"<<endl;
// out<<"Omkar Ghrge The Programmer";
//closing the file connection 
//out.close();

//declaring an object of the type ifstream
ifstream in;
//declaring string variable st
string st;
//opening the text file into in
in.open("samefile.txt");
// in>>st;
// cout<<st;
//giving output the string lines by storing in st until the file reaches the end of it 
while (in.eof()==0)
{
    /* code */
    // using getline to fill the whole line in st 
    getline(in,st);
    cout<<st<<endl;
}


      return 0;
}