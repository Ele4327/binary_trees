#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_insert_right-  function that creates a binary tree node
* @parent: pointer to the node to insert the right-child in
* @value: value to put in the new node.
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = NULL, *aux = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = new_right_node;
	}
	else
	{
		aux = parent->right;
		parent->right = new_right_node;
		new_right_node->right = aux;
		aux->parent = new_right_node;
	}

	return (new_right_node);
}
