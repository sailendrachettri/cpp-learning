#include <iostream>
using namespace std;
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number " << count << endl;
    }

    ~num(){
        cout << "This is a time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    // cout << "Destructor in C++ in Hindi " << endl;
    cout<< "We are inside main function"<<endl
    <<"Creating first objects n1"<<endl;
    num n1;
    {
        cout<< "Entering this block"<<endl;
        cout<< "creating two more objects"<<endl;
        num n2, n3;
        cout<< "Exiting this block"<<endl;
        // Destructor will automatically invoked after exiting this block because the scopr of the element/variables is no longer required outside from this block
    }
    cout<< "Back to main"<<endl;
    return 0;
}