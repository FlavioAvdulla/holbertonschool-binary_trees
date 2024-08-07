#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
* Return: Height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure the size
* Return: Size of the tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;
	size_t expected_size;
	size_t i;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	expected_size = 1;
	for (i = 0; i < height; i++)
	{
		expected_size = expected_size * 2;
	}
	expected_size = expected_size - 1;

	if (size == expected_size)
		return (1);
	else
		return (0);
}
