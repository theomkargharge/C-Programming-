// #include <iostream>
// using namespace std;
// // More on C++ Friend Functions
// class Y;
// class X
// {
//     int data;
//     friend void add(X, Y);

// public:
//     void setValue(int value)
//     {
//         data = value;
//         cout<<"This is data :"<<data<<endl;
//     }
// };
// class Y
// {
//     int num;
//     friend void add(X,Y);

// public:
//     void setValue(int value)
//     {
//         num = value;
//         cout<<"This is num :"<<num<<endl;


//     }
// };

// void add(X o1, Y o2)
// {
//     cout << "Summing datas of X and Y Objects gives me " << o1.data + o2.num;
// }
// int main()
// {
//     // Write code  here
//     X a1;
//     a1.setValue(3);

//     Y b1;
//     b1.setValue(5);

//     add(a1, b1);

//     return 0;
// }


// another funtion 

#include <iostream>
using namespace std;
class Y;

class X
{
    int val1;
    friend void swapdata(X &, Y &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};


class Y
{
    int val2;
    friend void swapdata(X &, Y &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void swapdata(X &a, Y &b)
{

    int temp = a.val1;

    a.val1 = b.val2;

    b.val2 = temp;

    cout << "This is the value of swap a " << a.val1 << endl;

    cout << "This is the value of swap b " << b.val2 << endl;
}

    // ol.indata(5);
int main()
{
    // Write code  here
    X ol;
    cout << "This is the current value of a ";
    ol.indata(5);
    ol.display();

    Y o2;
    cout << "This is the current value of b ";
    o2.indata(6);
    o2.display();

    swapdata(ol, o2);

    return 0;
}

