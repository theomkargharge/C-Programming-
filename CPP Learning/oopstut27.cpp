#include <iostream>
using namespace std;

class Number
{
      int a;
       

public:
      Number()
      {
          a = 0;
      }
      Number(int num)
      {
             
            a = num;
      }

      Number(Number &Obj){
            a = Obj.a;
      }

      void display()
      {
            cout << "This is a value of a " << a << endl;
      }
};

int main()
{
      // write code from here

      Number a, b, c(45),z1;

      a.display();
      // copy constructor this is the way we can copy value of c into b 
      b=c;
      b.display();
       z1 = c;
       z1.display();

      return 0;
}