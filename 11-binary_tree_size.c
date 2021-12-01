#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_size_recursion- func that measures size of node in binary tree
* @tree: pointer to the root node of the tree to measure the size.
* Return: size or 0 if tree is NULL.
*/

size_t binary_tree_size_recursion(const binary_tree_t *tree)
{
	size_t size_l;
	size_t size_r;

	size_l = tree->left ? 1 + binary_tree_size_recursion(tree->left) : 0;
	size_r = tree->right ? 1 + binary_tree_size_recursion(tree->right) : 0;

	return (size_l + size_r);
}

/**
* binary_tree_size- function that measures the size of node in binary tree
* @tree: pointer to the root node of the tree to measure the size.
* Return: size or 0 if tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size_recursion(tree);

	return (size);
}
