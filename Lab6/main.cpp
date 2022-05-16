#include "Tree.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "How much values do you want to enter?\n";
    int size;

    cin >> size;
    int *valueArr = new int[size];

    cout << "Enter values:\n";

    for (size_t i = 0; i < size; i++)
        cin >> valueArr[i];

    Tree tree;

    for (size_t i = 0; i < size; i++)
        tree.AddNode(valueArr[i]);

    cout << "Average of tree is: " << tree.FindAverage() << '\n';

    return 0;
}
