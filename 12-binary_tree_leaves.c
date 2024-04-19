#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaf
 * @tree:pointer to the root node
 * Return: 0 or Size
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
int size = 0;
if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
	return (1);
size =  binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (size);
}
