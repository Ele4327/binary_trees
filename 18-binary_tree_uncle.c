#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_uncle -  function that finds the uncle of a node
* @node: pointer to the node to find the uncle.
* Return: pointer to the uncle node or
* NULL if node is NULL or has no parent or uncle.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father = NULL;

	if ((!node) || (!node->parent) || (!node->parent->parent))
		return (NULL);

	father = node->parent->parent;

	if (father->right == node->parent)
		return (father->left);
	else
		return (father->right);
}
