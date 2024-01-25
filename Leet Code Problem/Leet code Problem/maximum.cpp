#include <iostream>
#include <string.h>
using namespace std;
int maximum(void)
{
  int num;
  cin >> num;

  string str = to_string(num);
  for (int i = 0; i < str.size(); i++)
  {

    if (str[i] == '6')
    {
      str[i] = '9';
      break;
    }
  }
  return stoi(str);
}
int main()
{
  // write code from here
  cout << maximum();

  return 0;
}

// #include <iostream>
// using namespace std;

// void TodoLIst(void){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i = 0;i<a;i++)
//     {
//         cin>>arr[a];
//     }
//     int count =0;
//     for(int i = 0;i<a;i++){
//         if(arr[i]>=1000){
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }

// int main() {
// 	// your code goes here
//   int t;
//   cin>>t;
//   while (t--)
//   {
//   TodoLIst();
//     /* code */
//   }

// 	return 0;
// }
