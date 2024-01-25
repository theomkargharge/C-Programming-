#include <iostream>
using namespace std;

bool hasTeen(int a, int b, int c)
{
    bool one = (a >=13 &&  a <= 19);
    bool two = (b >=13 &&  b <= 19);
    bool three = (c >=13 &&  c <= 19);

    if(!one){
        if(!two){
            if(!three){
                return false;
            }
        }
    }else{
        return true;
    }
    
    return true;
}

void isteen(int a){
    if(a >= 13 && a <= 19){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

int main()
{
    // Write code  here
    int a, b, c;
    cout << "Enter the numbers :" << endl;
    // cin >> a >> b >> c;
    cout << hasTeen(22,23,34)<<endl;
    isteen(13);

    return 0;
}  