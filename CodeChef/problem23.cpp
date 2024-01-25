#include <iostream>
#include <array>
using namespace std;
void Battel(void)
{

    int s;
    cin >> s;
    int array;
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < s; i++)

    {
        /* code */
        cin >> array;
        if (array % 2 == 0)
        {
            countEven++;

        }

        else
        {
            countOdd++;
        }
    }

    if (countEven > countOdd)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY"<<endl;
    }
//    cout<< countEven<<endl;
//    cout<<countOdd<<endl;
}
// }

int main()
{
    // write code from here

    Battel();
    

    return 0;
}

// #include <iostream>
// using namespace std;
// void Deprived(void){
//     int sleephr;
//     cin>>sleephr;
//     if(sleephr <7){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    Deprived();
// 	}

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// void display(void)
// {
//     int s;
//     cin >> s;
//     int arr[s];
//     cin >> arr[s];
//     for (int i = 0; i < arr[s]; i++)
//     {
//         /* code */
//         if ((arr[i] % 2 == 0) > (arr[i] % 2 != 0))
//         {
//             cout << "Ready for battel " << endl;
//             break;
//         }
//         else
//         {
//             cout << "Not Ready" << endl;
//             break;
//         }
//     }
// }
// int main()
// {
//     // write code from here
//     display();
//     return 0;
// }