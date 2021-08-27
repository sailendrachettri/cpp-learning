#include <iostream>
using namespace std;

class Employee
{
private: // by defaylt
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id of count " << count << " is " << id << endl;
    }

    // Static member functions - It can only access static variables/members 
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count;

int main()
{
    Employee sai, len, dra;
    sai.setData();
    sai.getData();
    Employee::getCount();

    len.setData();
    len.getData();
    Employee::getCount();

    dra.setData();
    dra.getData();
    Employee::getCount();

    return 0;
}