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
	size_t left_depth = 0, right_depth = 0;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->parent);
	right_depth = binary_tree_depth(tree->parent);

	if (left_depth > right_depth)
		return (left_depth + 1);

	return (right_depth + 1);
}
