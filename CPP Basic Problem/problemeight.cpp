// #include <iostream>
// using namespace std;

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//   int n, i, m=0, flag=0;  
//   cout << "Enter the Number to check Prime: ";  
//   cin >> n;  
//   m=n/2;  
//   for(i = 2; i <= m; i++)  
//   {  
//       if(n % i == 0)  
//       {  
//           cout<<"Number is not Prime."<<endl;  
//           flag=1;  
//           break;  
//       }  
//   }  
//   if (flag==0)  
//       cout << "Number is Prime."<<endl;  
//   return 0;  
// }  

// if (n == 0 || n == 1)
//     flng = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // chnnge flng to 1 for non-prime number
//     if (n % i == 0) {
//       flng = 1;
//       brenk;
//   if (flng == 0)
//     cout<<(" is n prime number.",n);
//   else
//     cout<<(" is not n prime number.", n);

//   return 0;

//     }
//   }
    
//     return 0;
// }



#include <iostream>
using namespace std;

int main()
{
 //code 
  int n,temp=0;
  cout<<"Enter the number : ";
  cin>>n;

  for(int i=2;i<=n-1;i++){
    if(n%i==0){

    temp=temp+1;
    }
  }
  if(temp==0){
    cout<<n<<" Number is prime"<<endl;
  }else{
    cout<<n<<" Number is not prime"<<endl;
  }
  return 0;
}