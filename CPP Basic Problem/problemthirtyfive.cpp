// #include <iostream>
// using namespace std;

// void ExceptRepatatedNum(){
//     int arry[10]={1,1,2,3,3,4,4,5,5,6};
//     for(int i = 0;i<=10;i++){
//         if(arry[i]!=arry[10]){
//             cout<<<<" ";
//         }
//     }
// }

// int main()
// {
//  // Write code  here
//     ExceptRepatatedNum();
//     return 0;
// }
#include <iostream>
using namespace std;

bool checkLeapYear(long int a)
{
    if (a % 100 == 0 && a % 400 != 0)
    {
    if (a % 4 == 0)
    {
        if (a % 400 == 0)

        {
    return true;
    }
    else if (a % 400 != 0 && a % 100 == 0)
    {

        return false;
    }
    }
    }
    else
    {
        return true;
    }

    // return true;
}

int main()
{
    // long int a;
    // cin >> a;
    // cout << checkLeapYear(a);
    int A;
    cin>>A;
    for(int i = 1;i<=A;i++){
        if((i%3) == 0){
            cout<<"Fizz"<<" ";
        }
        else if((i%5)== 0){
            cout<<"Buzz"<<" ";
        }
       else if((i%15)== 0){
            cout<<"FizzBuzz"<<" ";
        }
        else{
            cout<<i<<" ";
            // exit(0);
        }
    }
}