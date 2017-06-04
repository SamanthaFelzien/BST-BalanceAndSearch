// FELZIEN_EX1.cpp : Defines the entry point for the console application.
//



#include <iostream>
#include "genBST.h"
#include "perfectBalance.h"
#include "BSTSearch.h"

using namespace std;

int main()
{
	
	BST<int> * bsTree = new BST<int>(); 
	BSTNode<int>* p = new BSTNode<int>();
	BSTNode<int>* l = new BSTNode<int>();
	BSTNode<int>* r = new BSTNode<int>();
	//int searchVal = 10;
 

	p = bsTree->root;


	int treeValues[9] = {6,8,12,14,18,20,23,44,52};


	for (int i = 0; i < sizeof(treeValues) / sizeof(int); i++)
	{
		bsTree->insert(treeValues[i]);
	}
	

	//assign p to root
	p = bsTree->root;

	// make new root for left subtree and assign l to it
	l = bsTree->root->left;

	//make new root for right subtree and assign r to it
	r = bsTree->root->right; 
	
	
	//if the left and right subtrees do not have a difference in height/depth of more than 1
	//AND the BST does not have a left/right height/depth difference of more than 1--is perfectly balanced

	if ((isSubBalanced(l, r) && isBalanced(p))) {

		cout << "The tree is perfectly balanced" << endl;
	}
	else {
		cout << "The tee is not perfectly balanced" << endl;
	}
		
	

	/*
	if (breadthFirstSearch(bsTree, searchVal)) {
		cout << "Found " << searchVal << endl;
	}
	else {
		cout << "Didn't find " << searchVal << endl;
	}

	if (inorderSearch(bsTree, searchVal, p)) {
		cout << "Found " << searchVal << endl;
	}
	else {
		cout << "Didn't find " << searchVal << endl;
	}

	if (preorderSearch(bsTree, searchVal, p)) {
		cout << "Found " << searchVal << endl;
	}
	else {
		cout << "Didn't find " << searchVal << endl;
	}
	if (postorderSearch(bsTree, searchVal, p)) {
		cout << "Found " << searchVal << endl;
	}
	else {
		cout << "Didn't find " << searchVal << endl;
	}

	*/
	

	system("pause");
	return 0;
}

