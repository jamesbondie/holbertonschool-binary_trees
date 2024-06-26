#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree:pointer to the root node
 * Return: 0 or NULL
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);

}
