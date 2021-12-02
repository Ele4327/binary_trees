#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node to find the sibling.
* Return: pointer to the sibling node or
* NULL if node is NULL or has no parent.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *father = NULL;

	if (!node || !node->parent)
		return (NULL);

	father = node->parent;

	if (!father->right || !father->left)
		return (NULL);
	else if (father->right->n == node->n)
		return (father->left);
	return (father->right);
}
