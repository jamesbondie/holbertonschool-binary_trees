#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node id leaf or not
 * @node: node
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node
 * Return: 0 or hight
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_right <= h_left)
		return (h_left + 1);
	return (h_right + 1);
}


/**
 * binary_tree_balance - balance of a binary tree
 * @tree: pointer to root node
 *
 * Return: 0 or right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_is_perfect - it checks for if the tree is perfect
 *
 * @tree: node to the root
 * Return: zero or condition
 *
 *
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r, left, right;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_perfect(tree->left);
	l = binary_tree_balance(tree->left);
	right = binary_tree_is_perfect(tree->right);
	r = binary_tree_balance(tree->right);
	if (!(left - right)  && !(l - r))
		return (1);
	return (0);
}
