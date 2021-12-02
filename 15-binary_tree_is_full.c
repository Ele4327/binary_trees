#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the root node of the tree to check.
* Return: 1 if is full, 0 if not or also 0 if tree is NULL.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return ((binary_tree_is_full(tree->left) == 1) &&
	(binary_tree_is_full(tree->right) == 1) ? 1 : 0);
}
