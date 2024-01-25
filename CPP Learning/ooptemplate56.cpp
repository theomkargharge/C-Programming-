#include <iostream>
using namespace std;
// fuction templates and function parameters
template <class T1=float, class T2=int>
float averfunc()
{
    T1 a;
    T2 b;
    cin>>a>>b;
    float avg = ((a + b) / 2.0);
    return avg;
}
int main()
{
    // write code fra here
   float a;
   a = averfunc<>();
   cout<<a;

    return 0;
}