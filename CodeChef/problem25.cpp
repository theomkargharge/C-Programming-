#include <iostream>
using namespace std;
void flipthecards(void)
{

      int numberofcards;
      int cardsforflip;
      cin >> numberofcards >> cardsforflip;
      if ((numberofcards - cardsforflip) > cardsforflip)
      {
            cout << cardsforflip << endl;
      }
      else if ((numberofcards - cardsforflip) < cardsforflip)
      {
            cout << (numberofcards - cardsforflip) << endl;
      }
      else if ((numberofcards - cardsforflip) == cardsforflip)
      {
            cout << cardsforflip << endl;
      }
}

int main()
{
      // your code goes here
      int t;
      cin >> t;
      while (t--)
      {
            flipthecards();
      }
}
