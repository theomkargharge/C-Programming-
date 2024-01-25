#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int n, float m)
    {
        id = n;
        price =m;
    }
    void getData(void)
    {
        cout << "This is the id " << id << endl;
        cout << "This is price " << price << endl;
    }
};
int main()
{
    // write code from here
    int size = 4;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 <<endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}