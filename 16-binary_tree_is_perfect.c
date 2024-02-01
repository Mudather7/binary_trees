#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}

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
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the size or 0 if the tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t s, h;

	if (tree == NULL)
		return (0);

	s = binary_tree_size(tree);
	h = binary_tree_height(tree);

	return (s == pow(2, h + 1) - 1);
}
