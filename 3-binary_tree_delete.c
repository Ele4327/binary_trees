#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_delete-  function that deletes a binary tree node
* @tree: pointer to the root of a binary tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
