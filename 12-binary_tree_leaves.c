#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((!node->left) && (!node->right))
		return (1);
	return (0);
}

/**
* binary_tree_leaves- function that counts leaves in binary tree.
* @tree: pointer to the root node of the tree.
* Return: number of leaves or 0 if tree is NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		leaves += binary_tree_leaves(tree->right);

	if (binary_tree_is_leaf(tree) == 1)
		return (leaves + 1);
	return (leaves);
}
