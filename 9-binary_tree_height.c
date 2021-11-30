#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_is_height- function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
* Return: height or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height;

	if (!tree)
		return (0);

    /*In progress*/

	binary_tree_height(tree->left);
    binary_tree_height(tree->right);
}
