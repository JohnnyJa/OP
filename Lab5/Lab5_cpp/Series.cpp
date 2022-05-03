#include "Series.hpp"

void TSeries::SetFirstMember(int value)
{
    firstMember = value;
}

void TSeries::SetStep(int value)
{
    step = value;
}

TSeries::TSeries(int firstMember, int step)
{
    this->firstMember = firstMember;
    this->step = step; 
}

TSeries::~TSeries()
{
}