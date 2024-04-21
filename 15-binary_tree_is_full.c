#include "binary_trees.h"
/**
 * binary_tree_is_full - it checks for if the tree is full
 *
 * @tree: node to the root
 * Return: zero or condition
 *
 *
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree->left == NULL && tree->right == NULL) || 
	(tree->left && tree->right && 
	binary_tree_is_full(tree->left) && 
	binary_tree_is_full(tree->right));
}
