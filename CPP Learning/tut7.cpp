// // Functions in CPP

// #include <iostream>
// using namespace std;


// // function prototype
// int sum(int ,int);

// void g(void);

// int main()
// {
//  //code 
// int a ,b;
//   cout<<"Enter the Number of a"<<endl;
//   cin>> a;
//   cout<<"Enter the Number of b"<<endl;
//   cin>>b;
//   cout<<"The sum of a and b : " <<sum(a,b)<<endl;

//   g();
    
//     return 0;
// }

// int sum(int a ,int b){
//     int c = a+b;
//     return c ;
// }

// void g(){
//     cout<<"Hello,Shruti..!";
// }



#include <iostream>
using namespace std;

// *************************Function **********************
// int sum(int a , int b){
//     int c = a+b;
//     return c;

// }
// ********************Fucntion Prototype*************** 
// function prototype is gives the assuraty of function 
// for decalraing this there several method 
// int sum(int a,b)---- This is not acceptable
// int sum(int ,int)---This is acceptable
// int(sum(int a, int b));

// int main()
// {
//  // Write code  here 
//  int x,y;
//     cout<<"Enter First Value: "<<endl;
//     cin>>x;
//     cout<<"Enter Second Value: "<<endl;
//     cin>>y;
//     cout<<"The Sum of First and Second Value is :"<<endl;
//     cout<<sum(x,y);
    

//     return 0;
// }
// int sum(int a , int b){
//     int c = a+b;
//     return c;

// }

// *********** End of function prototype******************



int(sum(int a, int b));
// void g(void );//------Acceptable
void g(); //---- this is also acceptable

int main()
{
 // Write code  here 
 int x,y;

//  x and y are the actual parameters
    cout<<"Enter First Value: "<<endl;
    cin>>x;
    cout<<"Enter Second Value: "<<endl;
    cin>>y;
    cout<<"The Sum of First and Second Value is :"<<endl;
    cout<<sum(x,y);
    g();

    return 0;
}
int sum(int a , int b){
    //  here a and b is formal parameter  
    int c = a+b;
    return c;

}

void g (){
    cout<<"\nThank You..!";
}

