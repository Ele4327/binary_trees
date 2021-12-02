#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the root node of the tree to check.
* Return: 1 if is full, 0 if not or also 0 if tree is NULL.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return ((binary_tree_is_full(tree->left) == 1) &&
	(binary_tree_is_full(tree->right) == 1) ? 1 : 0);
}

/**
* binary_tree_height- function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
* Return: height or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_l > height_r ? height_l : height_r);
}

/**
* binary_tree_balance- function that measures balance factor of binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor or 0 if tree is NULL.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_l - height_r);
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check.
* Return: 1 if is perfect, 0 if not or also 0 if tree is NULL.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
	(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
