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
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree.
* @tree: pointer to the node to check
* Return: count the number of nodes, otherwise 0.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t branches = 0;

	if (!tree)
		return (0);

	if (tree->left)
		branches += binary_tree_nodes(tree->left);

	if (tree->right)
		branches += binary_tree_nodes(tree->right);

	if (binary_tree_is_leaf(tree) == 1)
		return (branches);
	return (branches + 1);
}
