#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL)
		return (0);
	if (node->right != NULL)
		return (0);
	return (1);
}

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

	if (tree == NULL || binary_tree_is_leaf(tree))
	{
		return (0);
	}
	else
	{
		left_depth = binary_tree_depth(tree->left);
		right_depth = binary_tree_depth(tree->right);

		if (left_depth > right_depth)
			return (left_depth + 1);

		return (right_depth + 1);
	}
}
