#include "Line.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    Line P1;
    cout << "Enter C coef to create the P2 line parallel to the X axis: \n";
    cin >> c;
    Line P2(c);
    cout << "Enter 3 coef to create the P3 line: \n";
    cin >> a >> b >> c;
    Line P3(a, b, c);

    if (P1 || P2)
        cout << "Lines P1 and P2 are parallel.\n";
    else
        cout << "Lines P1 and P2 aren't parallel.\n";

    if (!(P2 || P3))
        {
            Coords answer = P2.FindIntersection(P3);
            cout << "Point of intersection P2 and P3 is: " << answer.x << ' ' << answer.y <<"\n\n";
        }
        else
            cout << "Point of intersection P2 and P3 doesn't exist\n\n";


    cout << "P3 angle is: " << P3.GetAngle() << '\n';
    ++P3;
    cout << "P3++ angle is: " << P3.GetAngle() << "\n\n";

    
    return 0;
}
