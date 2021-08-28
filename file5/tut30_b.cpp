#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distanceOfTwoPoints(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

 void distanceOfTwoPoints(Point o1, Point o2)
    {
        int a, b;
        a = (o2.x - o1.x);
        a = a*a;

        b = (o2.y - o1.y);
        b = b*b;


        int res = sqrt(a+b);
        cout<< "The distance of two point is "<< res<<endl;
    }

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();
    
    distanceOfTwoPoints(p, q);

    return 0;
}

// - SAILENDRA CHETTRI