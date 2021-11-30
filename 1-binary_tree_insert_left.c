#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_insert_left -  function that creates a binary tree node
* @parent: pointer to the node to insert the left-child in
* @value: value to put in the new node.
* Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL, *aux = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		printf("inside if that has no left child");
		parent->left = new_left_node;
	}
	else
	{
		printf("inside if that has a left child\n");
		aux = parent->left;
		printf("aux designated\n");
		parent->left = new_left_node;
		printf("new left designated\n");
		new_left_node->left = aux;
		printf("new left child designated\n");
	}

	return (new_left_node);
}
