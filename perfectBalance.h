#include "genBST.h"

#ifndef PERFECTBALANCE
#define PERFECTBALANCE


//recursive function to find height/depth of LEFT SUBTREE 
int leftBalance(BSTNode<int>* l) {
	
	if (l == NULL)
		return 0;
	else {
	
		int lBal = leftBalance(l->left);
		return (lBal + 1);
	}

}

//recursive fucntion to find height/depth of RIGHT SUBTREE
int rightBalance(BSTNode<int>* r) {

	if (r == NULL)
		return 0;
	else {

		int rBal = rightBalance(r->left);
		return (rBal + 1);
	}


}

//recursive function to find height/depth of left side 
int leftDepth(BSTNode<int>* p)
{
	if (p == NULL)
		return 0;
	else
	{
		int lDepth = leftDepth(p->left);

	
			return(lDepth + 1);
	}
}

//recursive function to find depth/height of right side of tree
int rightDepth(BSTNode<int>* p)
{
	if (p == NULL)
		return 0;
	else
	{
		/* compute the depth of each subtree */
		int rDepth = rightDepth(p->right);


		return(rDepth + 1);
	}
}

//find if subtrees are balanced
bool isSubBalanced(BSTNode<int>* l, BSTNode<int>* r) {

	if (leftBalance(l) > rightBalance(r)) {
		if (leftBalance(l) - rightBalance(r) > 1) {
			return false;
		}
	}
		else if (rightBalance(r) > leftBalance(l)) {
			if (rightBalance(r) - leftBalance(l) > 1) {
				return false;
			}
		}
		else {
			return true; 
		}

}

//find if entire tree is perfectly balanced
bool isBalanced(BSTNode<int>* p) {

	if (leftDepth(p) > rightDepth(p)) {
		if (leftDepth(p) - rightDepth(p) > 1) {
			return false;
		}
	}
	else if (rightDepth(p) > leftDepth(p)) {
		if (rightDepth(p) - leftDepth(p) > 1) {
			return false;
		}
	}
		else {
			return true;
		}
}





#endif
