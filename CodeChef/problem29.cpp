#include <iostream>
using namespace std;

// template<class T ,class T1>
void BestofTwo(){
    int a ;
    int b;
    cin>>a>>b;
    if(a > b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
}
int main() {
//write code from here 
int t;
cin>>t;
while (t--)
{
    BestofTwo();
}


      return 0;
}