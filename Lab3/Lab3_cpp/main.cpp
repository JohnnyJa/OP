#include <iostream>
#include <vector>
#include "quadrangle.hpp"

using namespace std;

int main()
{
    size_t n;
    cout << "How much quadrangles do you want to create?\n";
    cin >> n;

    quadrangle* arr = new quadrangle[n];

    for (size_t i = 0; i < n; i++)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cout << "Enter coordinates of the convex quadrangle:\n";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        arr[i].SetCoordinates(x1, y1, x2, y2, x3, y3, x4, y4);
    }

    int Maxi = 0;
    double MaxPer = arr[0].CalculatePerimeter();

    for (size_t i = 0; i < n; i++)
    {
        cout << i + 1 << "-th quadrangle's perimeter is:\n" << arr[i].CalculatePerimeter() <<'\n';
        if(MaxPer < arr[i].CalculatePerimeter())
        {
            MaxPer = arr[i].CalculatePerimeter();
            Maxi = i;
        }
    }
    
    cout << "Maximal perimeter has " << Maxi + 1 << "-th quadrangle with perimeter value to " << MaxPer <<'\n';
    return 0;
}
