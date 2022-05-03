#pragma once

class TSeries
{  

protected:
    TSeries(int firstMember, int step);
    ~TSeries();
    int firstMember;
    int step; 

public:
    void SetFirstMember(int value);
    void SetStep(int value);
    virtual int FindMember(int memberNum) = 0;
    virtual int FindSum(int num) = 0;
};
