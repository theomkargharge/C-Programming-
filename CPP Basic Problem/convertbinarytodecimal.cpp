#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class binary
{

    int a;
    string b;

public:
    int temp;
    int base = 1;
    int dec_value = 0;
    void read(void);
    void check_bin(void);
    void convert_decimal(void);

    // cout<<"Enter the Binary Number:"<<endl;
    // cin>>a;
};
void binary ::read(void)
{
    cout << "Enter The Binary number :" << endl;
    cin >> a;
}

void binary :: check_bin(void){
     to_string(a)=b;
    for(int i = 1;i<=b.length();i++){
        if((i != '0') && (i =! '1')){
            cout<<"incorrect binary format"<<endl;
        }
    }
}
void binary ::convert_decimal(void)
{
    temp = a;
    while(temp){
        int last_digit = temp%10;
        temp = temp/10;

        dec_value +=last_digit*base;

        base = base *2;
    }
    cout<< dec_value;

}
int main()
{
    // Write code  here
    binary b;
    b.read();
     b.check_bin();
    b.convert_decimal();

    return 0;
}