#include "binary_trees.h"
#include <stdio.h>

static size_t _height(const binary_tree_t *tree);
static size_t _print_t(const binary_tree_t *tree, int is_left, int offset, int depth, char s[20][255]);
{
	char b[6];
	int width, left, right, i;
	size_t height;

	if (!tree)
		return (0);
	height = _height(tree);
	width = snprintf(b, 6, "(%03d)", tree->n);
	left = _print_t(tree->left, 1, offset, depth + 1, s);
	right = _print_t(tree->right, 0, offset + left + width, depth + 1, s);

	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + 1] = '-';
		s[depth - 1][offset + left + width /2] = '-';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '-';
	}
	return (left + width + right);
}
