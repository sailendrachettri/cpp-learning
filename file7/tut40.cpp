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

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number(void)
{
    cout << "Roll number: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float p, float m)
{
    physics = p;
    maths = m;
}

class Result : public Exam
{
    float prercentage;

public:
    void display(void);
};

void Result::display(void)
{
    get_roll_number();
    getMarks();
    cout << "The percentage is " << (maths + physics) / 2 << "%"<< endl;
}

void Exam::getMarks(void)
{
    cout << "Marks of physics and maths are " << physics << " and " << maths << endl;
}

int main()
{
    cout << "\nMultilevel Inheritance Deep Dive with Code Example in C++\n"
         << endl;

    Result sailendra;
    sailendra.set_roll_number(101);
    sailendra.setMarks(90.0, 30.0);
    sailendra.display();
    return 0;
}