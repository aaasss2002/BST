#ifndef BST_H
#define BST_H

class BST
{
private:
	struct node
	{
		node* left;
		node* right;
		int key;
	};

	node* root;

	void AddLeafPrivate(int key, node* n);

public:
	BST();
	node* CreateLeaf(int key);
	void AddNode(int key);
};

#endif