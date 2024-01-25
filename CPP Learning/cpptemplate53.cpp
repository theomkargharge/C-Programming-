// #include <iostream>
// using namespace std;

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             /* code */
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     // write code from here
//     vector v1(3);
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     vector v2(3);
//     v2.arr[0] = 1;
//     v2.arr[1] = 3;
//     v2.arr[2] = 5;

//     int a = v1.dotProduct(v2);
//     cout << a << endl;

//     return 0;
// }

// Template in cpp
#include <iostream>
using namespace std;

template <class T>

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // write code from here
    cout << "This is for float " << endl;
    vector<float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.0;
    v1.arr[2] = 1.2;
    vector<float> v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 3.6;
    v2.arr[2] = 5.5;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    cout << "This is for integer " << endl;

    vector<int> v4(3);
    v4.arr[0] = 4;
    v4.arr[1] = 3;
    v4.arr[2] = 1;
    vector<int> v5(3);
    v5.arr[0] = 1;
    v5.arr[1] = 3;
    v5.arr[2] = 5;

    int b = v4.dotProduct(v5);
    cout << b << endl;

    cout << "This is for double " << endl;

    vector<double> v6(3);
    v6.arr[0] = 4.2;
    v6.arr[1] = 3.0;
    v6.arr[2] = 1.2;
    vector<double> v7(3);
    v7.arr[0] = 1.2;
    v7.arr[1] = 3.6;
    v7.arr[2] = 5.5;

    double c = v6.dotProduct(v7);
    cout << c << endl;
    // cout << a << endl;

    return 0;
}