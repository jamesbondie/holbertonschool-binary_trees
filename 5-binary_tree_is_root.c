#include "binary_trees.h"


/**
 * binary_tree_is_root - check node root or not
 * @node: node to check
 * Return: 1 or 0
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	return (0);
}
