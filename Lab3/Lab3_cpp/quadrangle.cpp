#include "quadrangle.hpp"
#include <math.h>
#include <iostream>

double CalculateLength(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}


quadrangle::quadrangle()
{
    x1 = 0;
    x2 = 0;
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
    y3 = 0;
    y4 = 0;
}


void quadrangle::SetCoordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
}

double quadrangle::CalculatePerimeter()
{
    return CalculateLength(x1, y1, x2, y2) + CalculateLength(x2, y2, x3, y3) + CalculateLength(x3, y3, x4, y4) + CalculateLength(x4, y4, x1, y1);
}
