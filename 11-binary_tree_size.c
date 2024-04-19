#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a node
 * @tree:pointer to the root node
 * Return: 0 or Size
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;
	if (tree == NULL)
		return (0);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
