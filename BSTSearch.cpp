#include "BSTSearch.h"


//reursive function to do a inorder search of the BST and return true if the searchsearchVal is found
bool inorderSearch(BST<int>* tree, int searchVal, BSTNode<int>* p)
{
	if (p != 0) {
		if (inorderSearch(tree, searchVal, p->left)) return true;
		tree->visit(p);
		if (p->el == searchVal)
			return true;	
		if (inorderSearch(tree, searchVal, p->right)) return true;
	}
	return false;
}

//reursive function to do a preorder search of the BST and return true if the searchsearchVal is found
bool preorderSearch(BST<int>* tree, int searchVal, BSTNode<int>* p)
{
	if (p != 0) {
		tree->visit(p);
		if (p->el == searchVal)
			return true;
		if(preorderSearch(tree, searchVal, p->left)) return true;
		if(preorderSearch(tree, searchVal, p->right)) return true;
	}
	return false;
}

//reursive function to do a post order search of the BST and return true if the searchsearchVal is found
bool postorderSearch(BST<int>* tree, int searchVal, BSTNode<int>* p)
{
	if (p != 0) {
		if(postorderSearch(tree, searchVal, p->left)) return true;
		if(postorderSearch(tree, searchVal, p->right)) return true;
		tree->visit(p);
		if (p->el == searchVal)
			return true;
	}
	return false;
}

//function to do a breadth search of the BST and return true if the searchsearchVal is found
bool breadthFirstSearch(BST<int> * tree, int searchVal)
{
	Queue<BSTNode<int>*> queue;
	BSTNode<int> *p = tree->root;
	if (p != 0) {
		queue.enqueue(p);
		while (!queue.empty()) {
			//queue.pop();
			if (p->el == searchVal)
				return true;
			p = queue.dequeue();
			tree->visit(p);
			if (p->left != 0)
				queue.enqueue(p->left);
			if (p->right != 0)
				queue.enqueue(p->right);
		}
	}
	return false;
}

