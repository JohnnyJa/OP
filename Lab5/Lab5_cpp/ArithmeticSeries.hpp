#pragma once

#include "Series.hpp"

class ArithmeticSeries: protected TSeries
{
    public:
        ArithmeticSeries(int firstMember, int step);
        int FindMember(int memberNum);
        int FindSum(int num);
};


