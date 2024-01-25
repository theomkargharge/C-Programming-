#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void get_marks(float, float);
    void display_marks(void);
};

void Exam::get_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::display_marks()
{
    cout << "This is the marks of maths " << maths << endl;
    cout << "This is the marks of physics " << physics << endl;
}

class Result : public Exam
{
protected:
  float result;

public:
    void display_result(void);
};

void Result ::display_result(void)
{
    get_roll_number();
   display_marks();
    
    cout << "The Result is " << (maths+physics)/2 <<"%" << endl;
}

int main()
{
    // write code from here
    Result rs;
    rs.set_roll_number(12);
    rs.get_marks(95.4,96.9);
    rs.display_result();

    return 0;
}