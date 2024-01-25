#include <iostream>
using namespace std;

// C++ Objects Memory Allocation and using Arrays in Classes 

class Shop{
int itemId[100];
int itemprice[100];
int counter;



public:
void initConter (void) {counter =0;}
void SetPrice(void);
void DisplayPrice(void);
};

void Shop :: SetPrice(void){
    cout<<"Enter Id of Your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void Shop :: DisplayPrice(void){
    for(int i = 0;i <=counter;i++){
        cout<<"The Price of item with Id :"<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main()
{
 // Write code  here 

 Shop Dukan1;
 Dukan1.initConter();
 Dukan1.SetPrice();
 Dukan1.SetPrice();

 Shop Dukan2;
 Dukan2.initConter();
 Dukan2.SetPrice();
 Dukan2.SetPrice();
 Dukan2.SetPrice();

Dukan1.DisplayPrice();
cout<<endl<<endl;
Dukan2.DisplayPrice();

    return 0;
}