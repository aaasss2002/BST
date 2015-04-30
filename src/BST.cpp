#include <iostream>
#include <cstdlib>
#include "../include/BST.h"

using namespace std;



BST::BST()
{
	root = NULL;
}


BST::node* BST::createLeaf(int key)
{
	node* n = new node;
	n-> key = key;
	n -> left = NULL;
	n-> right = NULL;
	return n;
}