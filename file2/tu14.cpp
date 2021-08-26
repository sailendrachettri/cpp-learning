#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} emp;

typedef union money
{
    int rice;
    char car;
    float pounds;
} mny;


int main()
{
    cout<< "Structure union and enums"<<endl;

    // *****************************STRUCTURE*****************************
    // emp harry;
    // emp sail;
    // emp chet;
    
    // cout<< "\nChet's desc"<<endl;
    // harry.eId = 1;
    // harry.favChar = 'h';
    // harry.salary = 12000;
    // cout<< "eId = "<< harry.eId<<endl;
    // cout<< "favCher = "<< harry.favChar<<endl;
    // cout<< "Salary = "<< harry.salary<<endl;

    // cout<< "\nSail's desc"<<endl;
    // sail.eId = 2;
    // sail.favChar = 's';
    // sail.salary = 9000;
    // cout<< "eId = "<< sail.eId<<endl;
    // cout<< "favChar = "<< sail.favChar<<endl;
    // cout<< "Salary = "<< sail.salary<<endl;

    // cout<< "\nChet's desc"<<endl;
    // chet.eId = 3;
    // chet.favChar = 'c';
    // chet.salary = 5000;
    // cout<< "eId = "<< chet.eId<<endl;
    // cout<< "favChar = "<< chet.favChar<<endl;
    // cout<< "Salary = "<< chet.salary<<endl;

    // *****************************UNION*****************************
    // mny m1;
    // m1.rice = 10;
    // m1.pounds = 23.4;
    // m1.car = 'c';

    // cout<< "car: "<< m1.car<<endl;
    // cout<< "car: "<< m1.pounds<<endl;
    // cout<< "car: "<< m1.rice<<endl;

    // *****************************UNION*****************************
    enum Meal {breakfast, lunch, dinner};
    cout<< "breakfast "<< breakfast<<endl;
    cout<< "lunch "<< lunch<<endl;
    cout<< "dinner "<< dinner<<endl;



    return 0;
}