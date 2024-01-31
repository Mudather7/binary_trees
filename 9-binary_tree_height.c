#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the size or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = height(tree);

	return (count);
}
/**
 * height - count tree height
 *
 * @node: node to measure
 *
 * Return: height
 */
size_t t_height(const binary_tree_t *node)
{
	size_t left_height, right_height;

	if (node == NULL)
		return (0);
	left_height = t_height(node->left);
	right_height = t_height(node->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
