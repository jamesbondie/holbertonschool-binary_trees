#include "binary_trees.h"

/**
 * binary_tree_height - it measures height of the tree
 *
 * @tree: node to the root
 * Return: zero or condition
 *
 */



int _binary_tree_height(const binary_tree_t *tree)
{
int left_height = _binary_tree_height(tree->left);
int right_height = _binary_tree_height(tree->right);
if (tree == NULL)
	return (0);
if (left_height > right_height)
	return (left_height + 1);
else
	return (right_height + 1);
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
int height = _binary_tree_height(tree);
int nodes = 1;
int level = 0;
if (tree == NULL)
	return (0);
while (level < height - 1)
{
nodes *= 2;
level++;
}
return (nodes == (1 << height - 1));
}
