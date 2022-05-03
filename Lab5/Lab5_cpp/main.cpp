#include <iostream>
#include "GeometricSeries.hpp"
#include "ArithmeticSeries.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Enter n and m:\n";
    cin >> n >> m;
    cout<<'\n';
    int max_n = -1, max_sum, max_i;
    for (size_t i = 0; i < n; i++)
    {
        int firstMember = rand() % (10 - 1 + 1) + 1;
        int step = rand() % (10 - 2 + 1) + 2;
        cout << i + 1 << "th series first member is: " << firstMember << " and s tep is: " << step <<'\n';
        

        if (i % 2 == 0)
        {
            GeometricSeries geometricSeries(firstMember, step);
            cout << "Nth member is: " << geometricSeries.FindMember(n) << " and Mth sum is: " << geometricSeries.FindSum(m) << '\n\n';
            if (geometricSeries.FindMember(n) > max_n)
            {
                max_i = i;
                max_n = geometricSeries.FindMember(n);
                max_sum = geometricSeries.FindSum(m);
            }
        }
        else
        {
            ArithmeticSeries arithmeticSeries(firstMember, step);
            cout << "Nth member is: " << arithmeticSeries.FindMember(n) << " and Mth sum is: " << arithmeticSeries.FindSum(m) << '\n\n';
            if (arithmeticSeries.FindMember(n) > max_n)
            {
                max_i = i;
                max_n = arithmeticSeries.FindMember(n);
                max_sum = arithmeticSeries.FindSum(m);
            }
        }
    }

    cout << "\nMaximal n-member is: " << max_n << " in " << max_i << "th series with sum of first m members is: " << max_sum <<"\n\n";
    return 0;
}
