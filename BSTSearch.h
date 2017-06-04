

#include "genBST.h"

#ifndef BSTSEARCH
#define BSTSEARCH

bool breadthFirstSearch(BST<int> * tree, int val);
bool inorderSearch(BST<int> * tree, int val, BSTNode<int>* p);
bool preorderSearch(BST<int> *tree, int val, BSTNode<int>* p);
bool postorderSearch(BST<int> *tree, int val, BSTNode<int>* p);

#endif