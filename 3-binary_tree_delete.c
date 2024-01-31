#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_t *left, *right;

		left = tree->left;
		right = tree->right;
		free(tree);
		binary_tree_delete(left);
		binary_tree_delete(right);
	}
}
