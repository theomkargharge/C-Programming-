#include <iostream>
using namespace std;

// int factorial(){
//     int factorial;
//        factorial = factorial * (factorial -1);
// }
int main()
{
//  code 

    int factorial ,divider;

    cin>>divider>>factorial;

    int c;

    for(factorial ;factorial>0;factorial--){
       c = factorial * (factorial -1);
       break;
    }
    //     cout<<c;
       
       if(factorial > 0){
       
         if( c % divider == 0){

            cout<<divider<<" divides "<<factorial<<"!";

    } else{

         cout<<divider<<" does not divides "<<factorial<<"!";

        }
                }
    
//     int fact,divd,check;

//     cin>>fact;
   

//    for (fact;fact>0;fact--){
//       check = fact*fact-1;
   


//   cout<<check;
//     // for()

    return 0;
}