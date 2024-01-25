// #include <iostream>
// using namespace std;

// void BlockGame(void)
// {
//     int n, num, digit, rev = 0;
//     cin >> num;
//     n = num;
//     do
//     {
//         digit = num % 10;
//         rev = (rev * 10) + digit;
//         num = num / 10;
//     } while (num != 0);

//     if (n == rev)
//     {
//         cout << "wins" << endl;
//     }
//     else
//     {
//         cout << "loses" << endl;
//     }
// }

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         BlockGame();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
void tebale(void){
    int n,i=1;
    cin>>n;
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout<<i*n<<endl;
    // }

    do{
        i = i +1;
        cout<<(i*n)<<endl;

    }while(i<=9);
    
    
}
int main() {
//write code from here 
tebale();

      return 0;
}