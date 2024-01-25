#include <iostream>
using namespace std;
// Virtual Base Class
// Virtual base class is in multiple inheritance to save the space and avoid ambiguities in class hierarchies 
// In this below example from class student derived two classes and taking it's data members as a two times to so to avoid this it is also called as ambiguity that's why we use virtual base class 
class Student{
protected:
    int roll_no;

public:
    void set_number()
    {
        int a;
        cout<<"Enter the roll number here ";
        roll_no = a;
        cin>>roll_no;
    }
    void print_number(void){
        cout<<"This is the roll Number : "<<roll_no<<endl;
    }
};


class Test : public virtual Student{
    protected:
    float maths;
    float physics;
    float english;
    public:
    void set_marks(float m1, float m2, float m3){
        maths = m1;
        physics = m2;
        english = m3;
    }
    void print_marks(void){
        cout<<"This is the marks of maths: "<<maths<<endl 
            <<"This is the marks of physic: "<<physics<<endl
            <<"This is the marks of english: "<<english<<endl;
    }
};
class Sports: public virtual  Student{
 protected:
 float score;
 public:
 void set_score(int s){
    score = s;
 }
 void print_score(void){
    cout<<"This is the score "<<score<<endl;
 }
 

};
class Result:public Test,public Sports{
    protected:
    float total;
    public:
    void display_total(){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"This is the total score of student: "<<total<<endl;


    }

};
int main()
{
    // write code from here
    Result rs;
    rs.set_number();
    rs.set_marks(99.9,99.9,99.0);
    rs.set_score(9);
    rs.display_total();

    return 0;
}