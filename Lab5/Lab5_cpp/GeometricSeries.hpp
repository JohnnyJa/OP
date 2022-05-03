#pragma once

#include "Series.hpp"

class GeometricSeries: protected TSeries
{
    public:
        int FindMember(int memberNum);
        int FindSum(int num);
        GeometricSeries(int firstMember, int step);
};