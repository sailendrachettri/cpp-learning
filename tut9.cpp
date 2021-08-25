#include <iostream>

using namespace std;

int main()
{
    // control structure
    // 1. Sequence structure
    // 2. Selection structure
    // 3. Loop structure

    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // if (age < 18)
    // {
    //     cout << "You cannot come to my party!" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "inside if-else";
    // }
    // else
    // {
    //     cout << "Else block executed!";
    // }

    switch(age){
        case 19:
            cout<< "you are 19";
            break;

        case 20:
            cout<< "you are 20";
            break;
        case 2:
            cout<< "you are 2";
            break;
        default:
            cout<< "Default executed!";
    }

    return 0;
}