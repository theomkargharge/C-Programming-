// #include <iostream>
// #include<string>
// using namespace std;

// A structure is a user-defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type.
//  //  struct PersonalData{
//  //         int RollNumber;
//  //         string name;
//  //         char batch;

// //     };

// // typedef struct PersonalData{
// //         int RollNumber;
// //         string name;
// //         char batch;

// //     }om;

// // Union
// A union is a type of structure that can be used where the amount of memory used is a key factor.
// // typedef union PersonalData {
// //     int RollNumber;
// //     // string name;
// //     char batch;
// // }em;

// int main()
// {
//  //code
// //  em omk;

// //  omk.RollNumber =32;
// //  omk.batch ='c';
// //  cout<<omk.RollNumber;
// //  cout<<omk.batch;

// //  em aks;
// //  aks.RollNumber=15;
// //  aks.batch='A';

// //  cout<<aks.batch;

// // enum
// enum meal{
//     breakfast,
//     lunch,
//     dinner
// };

// cout<<breakfast<<endl;
// cout<<lunch<<endl;

// //  om Omkar;
// //  Omkar.RollNumber =3312;
// //  Omkar.name="Omkar Gharge ";
// //  Omkar.batch='A';

// //  struct PersonalData Akshay;
// //  Akshay.RollNumber =3315;
// //  Akshay.name="Akshay Jadhav ";
// //  Akshay.batch='A';

// // struct PersonalData Akshay;
// //  Akshay.RollNumber =3315;
// //  Akshay.name="Akshay Jadhav ";
// //  Akshay.batch='A';

// //  cout<<"This is RollNumber: "<<Omkar.RollNumber<<endl;
// //  cout<<"This is Name: "<<Omkar.name<<endl;
// //  cout<<"This is batch: "<<Omkar.batch<<endl;

// //  cout<<"This is RollNumber: "<<Akshay.RollNumber<<endl;
// //  cout<<"This is Name: "<<Akshay.name<<endl;
// //  cout<<"This is batch: "<<Akshay.batch<<endl;

//     return 0;

// }

#include <iostream>
using namespace std;

// ************************* It's About Structures Fucntion  ********************

// struct employee
// {
//     /* data */

//     int eid;
//     char faVchar;
//     string salary;
// };

typedef struct employee //******* typedf is repalce the struct employee to                    ep means its short cut to use or to itrate strcutures funciton ...!
{
    /* data */

    int eid;
    char faVchar;
    string salary;
} ep;

// ***************** Start of Union Function **************
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    // code

    // ************* This is all about Strcuture Function***********

    // struct employee omkar;
    // omkar.eid = 1;
    // omkar.faVchar = 'S';
    // omkar.salary = "20L";

    // struct employee shubham;

    // shubham.eid = 2;
    // shubham.faVchar = 'S';
    // shubham.salary = 300000000;

    // cout << "The Value of " << omkar.eid << endl;
    // cout << "The Value of " << omkar.faVchar << endl;
    // cout << "The Value of " << omkar.salary << endl;

    // cout<<endl<<endl<<endl;

    // cout << "The Value of " << shubham.eid << endl;
    // cout << "The Value of " << shubham.faVchar << endl;
    // cout << "The Value of " << shubham.salary << endl;

    ep omkar;
    omkar.eid = 1;
    omkar.faVchar = '4';
    omkar.salary = "20L";

    // cout<<"This is info related to Mr.Omkar Gharge"<<endl;

    // cout << "The Value of " << omkar.eid << endl;
    // cout << "The Value of " << omkar.faVchar << endl;
    // cout << "The Value of " << omkar.salary << endl;

    //     cout<<endl<<endl<<endl;

    //    ep shubham;

    //     shubham.eid = 2;
    //     shubham.faVchar = 'S';
    //     shubham.salary = 300000000;

    //     cout<<"This is info related to Mr.Shubham Gharge";

    //     cout << "The Value of " << omkar.eid << endl;
    //     cout << "The Value of " << omkar.faVchar << endl;
    //     cout << "The Value of " << omkar.salary << endl;

    // *******************************End of structure Function ********************************

    // ********************* Start of Union Function*****************************

    // Union means you can use the data of three format at only one
    union money m1;
    m1.rice = 35;
    //    m1.car ='c';

    //    cout<<m1.car;

    //    cout<<m1.rice;

    //    m1.car = 'c';
    //    cout<<m1.car;//--- See it overwrite the rice value it not showing correct value of rice

    // ************** End of Union ******************

    // ************************ Start of Enum **************
    //  Enumeration
    //  Enums: Enums are user-defined types that consist of named integral constants.
    // It helps to assign constants to a set of names to make the program easier to read, maintain and understand.

    enum Meal
    {
        Breakfast,
        lunch,
        dinner
    };
    Meal n1 = lunch;
    Meal n2 = Breakfast;
    Meal n3 = dinner;
    cout << (n2) << endl;
    cout << (n1) << endl;
    return 0;
}