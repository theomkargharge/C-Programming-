// #include <iostream>
// using namespace std;
// // Member Function Templates and Overloading Template Function in CPP
// template <class T>
// class Omkar
// {
// public:
//     T a;
//     Omkar(T data)
//     {
//         a = data;
//     }
//     void Display(void);
// };
// template <class T>
// void Omkar<T>::Display()
// {
//     cout << a << endl;
// }

// int main()
// {
//     // write code from here
//     Omkar<float> h(4.20f);
//     cout << h.a<<endl;
//     h.Display();

//     return 0;
// }

#include <iostream>
using namespace std;
void func(int a)
{
    cout << "I am first func() " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I Am Templatised func() " << a << endl;
}
int main()
{
    // write code from here
    func(4); // Exact match takes the highest priority
    func<int>(5);

    return 0;
}