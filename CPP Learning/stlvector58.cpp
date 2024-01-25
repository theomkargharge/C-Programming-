#include <iostream>
#include <vector>
using namespace std;

//vector in cpp  stl
template <class T, class T2>
void display(vector<T> v)
{
      for (T i = 0; i < v.size(); i++)
      {
            cout << v[i] << " ";
      }
      cout << endl;
}

template <class T2>

void disaply1(vector<T2> v)
{
      for (int i = 0; i < v.size(); i++)
      {
            cout << v[i] << " ";
      }
    
      cout <<endl;
}
int main()
{
      // write code from here

      vector<int> vec1;        // zero length integer vector
      vector<char> vec2(4);    // 4-element character vector
      vector<char> vec3(vec2); // 4-element character vector from vec2
      vector<int> vec4(6, 4);

      // int element, size;
      int size;
      char element;
      cout << "Enter the size of your vector " << endl;
      cin >> size;
      for (int i = 0; i < size; i++)
      {
            cout << "Enter an element to add to this vector : " << endl;
            cin >> element;
            vec2.push_back(element);
      }
      cout <<"This the character from vec2 : ";
      disaply1<char>(vec2);
      disaply1<char>(vec3);
      // vec1.pop_back();
      // cout << "These are the memebers of vector vec1: ";
      // display(vec1);
      // vec1.pop_back();
      // display(vec1);
      // display(vec1);

      // vector<int>::iterator iter = vec1.begin();
      // vec1.insert(iter, 5,21);
      // vector<int>::iterator iter1 = vec1.end();
      // vec1.insert(iter1, 5,10);

      // display(vec1);

      return 0;
}
