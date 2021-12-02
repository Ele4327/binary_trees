#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_balance- function that measures balance factor of binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor or 0 if tree is NULL.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return ((binary_tree_is_full(tree->left) == 1) && (binary_tree_is_full (tree->right) == 1) ? 1 : 0);

}
