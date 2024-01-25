#include <iostream>
using namespace std;
class Manipulate{
    int x,y;
    public:
    Manipulate(){
        int a , b;
        x = a;
        y = b;
        cin>>x>>y;
    }
    void Display(void){
        if(y > x){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
};
int main() {
//write code from here 
int t;
cin>>t;
while ((t--))
{
    /* code */
    Manipulate mh;
    mh.Display();
}


      return 0;
}