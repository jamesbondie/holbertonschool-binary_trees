#include "binary_trees.h"

/**
 * binary_tree_nodes - function that measures the nodes
 * @tree:pointer to the root node
 * Return: 0 or Size
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t size = 0;
if (tree == NULL)
{
if (tree->left != NULL || tree->right != NULL)
size++;
size += binary_tree_nodes(tree->left);
size += binary_tree_nodes(tree->right);
}
return (size);
}
