#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	int left_height = 0;
	int right_height = 0;

	if (tree->left != NULL)
		left_height = (int) binary_tree_height(tree->left);
	if (tree->left != NULL)
		right_height = (int) binary_tree_height(tree->right);

	return (left_height - right_height);
}
