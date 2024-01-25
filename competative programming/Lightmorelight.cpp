
//  //code 
//     // int number;
//     // cin>>number;

//     // if(number % 1 == 0){
//     //     if( number % number == 0){

//     //     cout<<"Yes";
//     //     }

//     // } else{
//     //       cout<<"NO";
//     // }

// //     int number ;
// //     cin>>number;
// //     if(6*(number)-1){
// //         cout<<"yes";
// //     }else{
// //         cout<<"No";
// //     }
// //     return 0;
// // }

// // #include<stdio.h>  
// //     int main(){    
// //     int n,i,m=0,flag=0;    
// //     printf("Enter the number to check prime:");    
// //     scanf("%d",&n);    
// //     m=n/2;    
// //     for(i=2;i<=m;i++)    
// //     {    
// //     if(n%i==0)    
// //     {    
// //     printf("Number is not prime");    
// //     flag=1;    
// //     break;    
// //     }    
// //     }    
// //     if(flag==0)    
// //     printf("Number is prime");     
// //     return 0;  
// //  }
#include <iostream>
using namespace std;

int main(){
  int n, i, flag = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
//  cout<<"Enter The Positive Number";
//   cin>>n;
    // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
 if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
  if (flag == 0)
    cout<<(" is a prime number.",n);
  else
    cout<<(" is not a prime number.", n);

  return 0;

    }
  }
}


// int n, i, flag = 0;
// printf("Enter a positive integer: ");
// scanf("%d", &n);
// //  cout<<"Enter The Positive Number";
// //   cin>>n;
//     // 0 and 1 are not prime numbers
//   // change flag to 1 for non-prime number
//  if (n == 0 || n == 1)
//     flag = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change flag to 1 for non-prime number
//     if (n % i == 0) {
//       flag = 1;
//       break;
//   if (flag == 0)
//     cout<<(" is a prime number.",n);
//   else
//     cout<<(" is not a prime number.", n);

//   return 0;

//     }
//   }

  // flag is 0 for prime numbers
