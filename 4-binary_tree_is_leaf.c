#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to node
 * Return: 1 or 0
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL0)
		return(0);
	else if (node->left == NULL && node->right == NULL)
		return(1);
	return(0);
}
