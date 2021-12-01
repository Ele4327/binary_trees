#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_depth- function that measures the depth of node in binary tree
* @tree: pointer to the root node of the tree to measure the depth.
* Return: depth or 0 if tree is NULL.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	/* depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;*/

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}
