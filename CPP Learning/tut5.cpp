// #include <iostream>
// using namespace std;

// int main()
// {
// //  //code 
//     int marks[4] ={1,2,3,4};
     
//      for(int i=0;i< 4;i++){
//          cout<< marks[i]<<" ";
          
//      }

// //     // int i=0;
// //     // while(i<4){
// //     //     cout<<marks[i]<<endl;
// //     //     i++;
// //     // }
// //     // int i=0;

// //     // do{
// //     //     cout<<"this is marks "<<i<<" is "<<marks[i]<<endl;
// //     //     i++;
// //     // }while(i<4);


// //     //  Pointer and arrays
// //      int* p = marks;
// //     //  cout<<*(p++)<<endl;
// //     //  cout<<*(++p)<<endl;

// //      cout<<"the value of *p is "<<*p<<endl;
// //      cout<<"the value of *p is "<<*(p+1)<<endl;
// //      cout<<"the value of *p is "<<*(p+2)<<endl;
// //      cout<<"the value of *p is "<<*(p+3)<<endl;
//     return 0;
// }




#include <iostream>
using namespace std;

int main()
{
 //code 
    int marks[4]={1,2,3,4};

    // for(int i = 0;i<4 ;i++){
    //   cout<<marks[i]<<" ";
    // }
    // int i=0;

    // while(i < 4){
    //     cout<<marks[i]<<" ";
    //     i++;

    // }


    // int i = 0;
    // do{
    //     cout<<marks[i]<<" ";
    //     i++;
    // }while(i<4);



    // Pointer in arrays

    int * p =marks;
    cout<<"Address "<<endl;
     cout<<p<<" "<<endl;
    cout<<p+1<<" "<<endl;
    cout<<p+2<<" "<<endl;
    cout<<p+3<<" "<<endl;
    cout<<"Values "<<endl;
    cout<<*p<<" "<<endl;
    cout<<*p+1<<" "<<endl;
    cout<<*p+2<<" "<<endl;
    cout<<*(p+3)<<" "<<endl;
}






