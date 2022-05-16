#include "Tree.h"
#include <queue>
#include <stack>

using namespace std;

Tree::Tree()
{
    root = new TNode;
    treeSize = 0;
}

void Tree::AddNode(double val)
{
    if (root->val == NULL)
    {
        root->val = val;
        treeSize++;
        return;
    }

    TNode *currentNode;
    queue<TNode *> nodeQueue;
    nodeQueue.push(root);

    for (size_t i = 0; i < treeSize; i++)
    {
        currentNode = nodeQueue.front();
        nodeQueue.pop();

        if(currentNode->left == NULL)
        {
            currentNode->left = new TNode;
            currentNode->left->val = val;
            break;
        }

        if(currentNode->right == NULL)
        {
            currentNode->right = new TNode;
            currentNode->right->val = val;
            break;
        }

        nodeQueue.push(currentNode->left);
        nodeQueue.push(currentNode->right);

        
    }
    treeSize++;
}

double Tree::FindAverage()
{
    double sum = 0;
    TNode *currentNode;
    stack<TNode *>  nodeStack;
    nodeStack.push(root);

    for (size_t i = 0; i < treeSize; i++)
    {
        currentNode = nodeStack.top();
        nodeStack.pop();

        sum += currentNode->val;

        if(currentNode->left != NULL)
            nodeStack.push(currentNode->left);

        if(currentNode->right != NULL)    
            nodeStack.push(currentNode->right);

        
    }
    return sum / static_cast<double>(treeSize);
}

Tree::~Tree()
{
    TNode *currentNode;
    stack<TNode *>  nodeStack;
    nodeStack.push(root);

    for (size_t i = 0; i < treeSize; i++)
    {
        currentNode = nodeStack.top();
        nodeStack.pop();

        if(currentNode->left != NULL)
            nodeStack.push(currentNode->left);

        if(currentNode->right != NULL)    
            nodeStack.push(currentNode->right);

        delete currentNode;
    }
}