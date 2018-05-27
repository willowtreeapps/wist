#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>

using namespace std;

struct Location {
    int line;
    int column;
};

struct Node
{
    string context;
    string text;
    Location start;
    Location stop;
};

struct TreeNode
{
    Node node;
    vector<TreeNode> children;
};

#endif