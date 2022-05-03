#include "ArithmeticSeries.hpp"


ArithmeticSeries::ArithmeticSeries(int firstMember, int step)
    :TSeries(firstMember, step)
{
}

int ArithmeticSeries::FindMember(int memberNum)
{
    return firstMember + step * (memberNum - 1);
}

int ArithmeticSeries::FindSum(int num)
{
    return (num/2) * (2* firstMember + (num - 1) * step);
}