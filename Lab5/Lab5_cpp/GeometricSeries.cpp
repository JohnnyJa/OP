#include "GeometricSeries.hpp"
#include <cmath>


GeometricSeries::GeometricSeries(int firstMember, int step)
    :TSeries(firstMember, step)
{
}

int GeometricSeries::FindMember(int memberNum)
{
    return firstMember * pow(step, memberNum - 1);
}

int GeometricSeries::FindSum(int num)
{
    return firstMember * (pow(step, num) - 1) / (step - 1);
}