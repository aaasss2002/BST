#include <iostream>
#include <cstdlib>
#include "../include/BST.h"

using namespace std;


BST::BST()
{
	root = NULL;
}

BST::node* BST::CreateLeaf(int key)
{
	node* n = new node;
	n->key = key;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void BST::AddNode(int key)
{
	if (root == NULL)
	{
		root = CreateLeaf(key);
	}
	else{
		AddLeafPrivate(key, root);
	}
		
}

void BST::AddLeafPrivate(int key, node* n)
{
	if (key < n->key)
	{
		if (n->left != NULL)
		{
			AddLeafPrivate(key, n->left);
		}
		else
		{
			n->left = CreateLeaf(key);
		}
	} else
	{
		if (n->right != NULL)
		{
			AddLeafPrivate(key, n->right);
		}
		else
		{
			n->right = CreateLeaf(key);
		}
	}
}