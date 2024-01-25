#include <iostream>
using namespace std;

// hollo sqaure program like:
// *  * *
// *    *
// * * * 
// Take the size of the square.
// Create a nested loop where there are 2 loops in the external loop.
// In the first internal loop, the spaces and second internal loop prints the star.
// Break the line after completing both internal loops to create a new line.

void holosqaureprogram(){
    
  // size of the triangle
  int size = 5;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
                                                        
}

int main() {
//write code from here 
holosqaureprogram();



      return 0;
}