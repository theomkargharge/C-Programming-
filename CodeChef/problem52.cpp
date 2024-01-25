#include <iostream>
using namespace std;
int Airline(void)
{
    int a, b, c, e, f, temp, finalmin;
    cin >> a >> b >> c>>e>>f;
    if((a+b)<=e && c <=f){
        cout<<"Yes"<<endl;
    }
    else if((a+c)<=e && b<=f){
        cout<<"Yes"<<endl;
    }
    else if((b+c)<=e && a<=f){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    // write code from here
    Airline();
    return 0;
}