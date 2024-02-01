#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of a node or 0 if the tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
