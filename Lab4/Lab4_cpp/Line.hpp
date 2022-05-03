
#include <vector>

using namespace std;

struct Coords
{
    double x, y;
};

class Line
{
public:
    struct TAngle
    {
        double rad, deg;
    };
    
    Line();
    Line(int c);
    Line(int a, int b, int c);
    void operator++();
    bool operator||(Line SecondLine);
    double GetAngle();
    Coords FindIntersection(Line SecondLine);

private:
    vector<int> Coefs;
    TAngle Angle;
};

