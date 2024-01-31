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
	int count;

	if (tree == NULL)
		return (0);
	count = tree_height(tree);

	return ((size_t)count);
}
/**
 * height - count tree height
 *
 * @node: node to measure
 *
 * Return: height
 */
int tree_height(const binary_tree_t *node)
{
	int left_height, right_height;

	if (node == NULL)
		return (0);
	left_height = tree_height(node->left);
	right_height = tree_height(node->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
