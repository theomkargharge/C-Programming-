// #include <iostream>
// using namespace std;

// int main()
// {
//  //code 
//  int t;
//  cin >> t;
//  while(t--);
//   int * numbers[]={};
//   int ** c = &numbers[0];

//   cout << "Enter 4 numbers: " << endl;

//   //  store input from user to array
//   for (int i = 0; i < **c; ++i) 
//     cin >> numbers[i];


// //  cout<<"This is normal Order"<<endl;
//     // cout<<" "<<numbers[i];
    
  
 
//   for(int j=(**c-1); j >= 0;--j)
//       cout<<numbers[j]<<" ";

//     // cout<<"This is Reverse Order"<<endl;
//         // cout<<numbers[j];
    

  
    

//     return 0;
// }




#include <iostream>
using namespace std;

int main()
{
 //code 
 int t,i;
 cin >> t;
 while(t--);
 int arr[999];
 for ( i=0;i<999;i++){
   cin>>arr[i];
  //  break;
  break;
  // continue;

  
 }
 for (i=(999-1);i>=0;i--){
    cout<<arr[i]<<" ";
    break;
  }
 

  return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5], i;
//     cout<<"Enter 10 Array Elements: ";
//     for(i=0; i<5; i++)
//         cin>>arr[i];
//     cout<<"\nThe Original Array is:\n";
//     for(i=0; i<5; i++)
//         cout<<arr[i]<<" ";
//     cout<<"\n\nThe Reverse of Given Array is:\n";
//     for(i=(5-1); i>=0; i--)
//         cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }