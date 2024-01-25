#include <iostream>
using namespace std;

//Dynamic Initialization of Objects Using Constructors

class BankDeposit
{

    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void show()
    {
        cout << "The principal value is " << principal << " The Return value after " << year << " is " << returnvalue << endl;
    }
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < year; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + interestrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    interestrate = float(R)/100;
    returnvalue = principal;

    for (int i = 0; i < year; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + interestrate);
    }
}

int main()
{
    // write code from here

    BankDeposit bd1, bd2, bd3;
    cout<<"Enter the value of principal ,year and intrest"<<endl;
    int pr,yr,R;
    float rr;
    cin>>pr>>yr>>rr;
    bd1= BankDeposit(pr,yr,rr);
    bd1.show();

    cout<<"Enter the value of principal ,year and intrest"<<endl;
    cin>>pr>>yr>>R;
    bd2 = BankDeposit(pr ,yr , R);
    bd2.show();

    return 0;
}