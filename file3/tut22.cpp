#include <iostream>
#include <string>
using namespace std;

class binary
{
private: // It is private by default
    string s;
    void chk_bin(void);

public:
    void read(void);
    void onesComplement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            exit(0);
        }
    }
}

void binary ::onesComplement(void)
{
    chk_bin(); // This is a nesting member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << "" << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // Can't call this function coz it is private now.
    b.display();
    b.onesComplement();
    b.display();

    return 0;
}