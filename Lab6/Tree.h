#include <cstddef>

class Tree
{
private:

    struct TNode
    {
        float val = NULL;
        TNode *left = NULL, *right = NULL;
    };

    std::size_t treeSize;
    TNode *root;

public:
    Tree();
    void AddNode(double val);
    double FindAverage();
    ~Tree();
};
