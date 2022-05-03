#include "Line.hpp"
#include <math.h>
#include <iostream>

static double RadToDeg(double Rad)
{
    return Rad * (180.0 / M_PI);
}

static double DegToRad(double Deg)
{
    return Deg * (M_PI / 180.0);
}

Line::Line()
{
    std::cout<<"Line P1 y = x  created;\n";
    Coefs = {1, -1, 0};
    Angle = { M_PI / 4, 45};
}

Line::Line(int c)
{
    Coefs = {0, -1, c};
    Angle = {0, 0};
}

Line::Line(int a, int b, int c)
{
    Coefs = {a, b, c};
    if (b != 0)
    {
        Angle.rad =atan(static_cast<double>(-a) / b);
        Angle.deg = RadToDeg(Angle.rad);
    }
    else
    {
        Angle = { M_PI/2, 90};
    }
}

void Line::operator++()
{
    Angle.deg += 1;
    Angle.rad += RadToDeg(1);
    Coefs[1] = tan(Angle.rad);
}

bool Line::operator||(Line SecondLine)
{
    if (this->Angle.rad == SecondLine.Angle.rad)
        return true;
    else
        return false;
}

double Line::GetAngle()
{
    return Angle.deg;
}

Coords Line::FindIntersection(Line SecondLine)
{
    Coords Intersect;
    int divider, multiplier;
    double a[2][3];

    if (this->Coefs[0] != 0)
    {
        for (size_t i = 0; i < 3; i++)
        {
            a[0][i] = this->Coefs[i];
            if (i == 3)
                a[0][i] *= -1;
        }
        for (size_t i = 0; i < 3; i++)
        {
            a[1][i] = SecondLine.Coefs[i];
            if (i == 3)
                a[1][i] *= -1;
        }
    }
    else
    {
        for (size_t i = 0; i < 3; i++)
        {
            a[1][i] = this->Coefs[i];
            if (i == 3)
                a[1][i] *= -1;
        }
        for (size_t i = 0; i < 3; i++)
        {
            a[0][i] = SecondLine.Coefs[i];
            if (i == 3)
                a[0][i] *= -1;
        }
    }

    double a_clone[2][3];
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            a_clone[i][j] = a[i][j];
        }
    }

    for (size_t i = 0; i < 3; i++)
        a_clone[0][i] /= a[0][0];
    for (size_t i = 0; i < 3; i++)
        a_clone[1][i] -= a[1][0] * a_clone[0][i];

    Intersect.y = -1 * a_clone[1][2] / a_clone[1][1];
    Intersect.x = a_clone[0][2] - Intersect.y * a_clone[0][1];
    return Intersect;
}