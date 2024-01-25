#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Omkar
{
      T1 a;
      T2 b;
      T3 c;

public:
      Omkar()
      {
            T1 x;
            T2 y;
            T3 z;

            a = x;
            b = y;
            c = z;
            cin>>a>>b>>c;
      }
      void display(){
            cout<<"The value of a :"<<a<<endl;
            
            cout<<"The value of b :"<<b<<endl;
            
            cout<<"The value of c :"<<c<<endl;
            
            
      }
};

int main()
{
     
      Omkar<float , double , string> om;
      om.display();

      return 0;
}