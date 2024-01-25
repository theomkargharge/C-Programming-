#include <iostream>
using namespace std;
//Abstract Base class and pure virtual function 

class CHW
{
protected:
    string title;
    float rating;

public:
    CHW(string s, float r)
    {
        title = s;
        rating = r;
    }
   virtual void display(void)=0;// do-noting function --> pure virtual funtion
   //Abstract base class having atleast pure virtual function which is derived many derived classes and display their own disply funtion 
    
};
class videolength : public CHW
{
protected:
    float videlengt;

public:
    videolength(string s, float r, float vlen) : CHW(s, r)
    {
        videlengt = vlen;
    }
    void display(void)
    {
        cout << " The title of vidoes is:  " << title << endl;
        cout << " The Rating of vidoes is: " << rating << " out of 5 star" << endl;
        cout << " The Video length of video is: " << videlengt<<" Minutes " << endl;
    }
};
class Words : public CHW
{
protected:
    int words;

public:
    Words(string s, float r, int wrds) : CHW(s, r)
    {
        words = wrds;
    }
    void display(void)
    {
        cout << " The title of vidoes is: " << title << endl;
        cout << " The Rating of vidoes is: " << rating << " out of 5 star" << endl;
        cout << " The number of words in  Video length of video is: " << words << endl;
    }
};
int main()
{
    // write code from here
    
    string title ;
    float rating , vlen;
    int words;

    // for code with harry video
    title = "Chaliye Shru kartye he .!";
    rating = 4.99;
    vlen=11.23;
    videolength obj1(title,rating,vlen);

    //for code with harry words
    title = "Hello Guy's welcome to the next video !";
    rating= 5.00;
    words =300;
    Words obj2(title,rating,words);

    CHW * tuts[2];
    tuts[0] = &obj1;
    tuts[1]= &obj2;
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}