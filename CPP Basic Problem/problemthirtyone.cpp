#include <iostream>
using namespace std;
// void checkafterdecimalEqual(float a , float b){
//     cout<<"Enter the Number "<<endl;
//     cin>>a>>b;
//     if((a*100)==(b*100)){
//         cout<<"True";
//     }else{
//         cout<<"false";
//     }
// }



class CheckDecimalEqual{
    float a ,b;

    public :
    void read(void);
    void answer(void);
   


};

void CheckDecimalEqual:: read(void){
  cout<<"Enter the Float Number : "<<endl;
  cin>>a;
  cin>>b;
}

void CheckDecimalEqual:: answer(void){
    if(a*100 == b*100){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
int main()
{
 // Write code  here 
 
//  checkafterdecimalEqual(x,y);

CheckDecimalEqual takeit;
takeit.read();
takeit.answer();

    return 0;
}