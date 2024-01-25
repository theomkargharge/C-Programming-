// Array of Objects and Passing Objects as function Arguments in C++

#include <iostream>
using namespace std;
class employee{

    int id;
    int salary;

    public:
    void setData(){
        salary =122;
      cout<<"Enter the id:"<<endl;
      cin>>id;
    }
    void getData(){
        cout<<"This is the id of employee : "<<id<<endl;
    }

};

int main()
{
 // Write code  here
//  employee microsoft;
//  microsoft.setData();
//  microsoft.getData();
employee fb[10];
for (int i = 0; i < 10; i++)
{
    /* code */
fb[i].setData();
fb[i].getData();
}

    return 0;
}

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void setDataBySum(complex ol, complex o2)
//     {
//         a = ol.a + o2.a;
//         b = ol.b + o2.b;
//     }
//     void printNumber()
//     {
//         cout << "Your complex number is " << a << " + " << b << "i " << endl;
//     }
// };
// int main()
// {
//     // Write code  here
//     complex c1, c2, c3;
//     c1.setData(2, 5);
//     //  c1.setDataBySum();D
//     c1.printNumber();

//     c2.setData(3, 2);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();

//     return 0;
// }