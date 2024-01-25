#include <iostream>
using namespace std;

int main()
{
 //check if the number is even or ood
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n%2==1){
        cout<<"The Number is Odd "<<n;
    }else{
        cout<<"The Number is Even "<<n;
    }
    return 0;
}