#include <iostream>
using namespace std;

class tocentimeter
{
private:
  float foot;
  float centimeters;

public:
  void footTocentimeters(void);
};

void tocentimeter ::footTocentimeters(void)
{
  float temp;
  cout << "Enter the Foot : ";
  cin >> foot;
  temp = (foot * 30.48);
  centimeters = temp;
  cout << "The Foot in Centimeters in :" << centimeters << endl;
}

int main()
{
  // Write code  here
  tocentimeter height;
  height.footTocentimeters();

  return 0;
}