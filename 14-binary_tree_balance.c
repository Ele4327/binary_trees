#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_balance- function that measures balance factor of binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor or 0 if tree is NULL.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (height_l - height_r);
}
