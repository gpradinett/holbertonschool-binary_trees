#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree.
* The height of the node is the distance from that node to the deepest node
* of the tree.
* @tree: Pointer to the root node of the tree to measure the height.
* Return: return the height or 0 if tree is NULL.
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	int number = 0;
	int left = 0;
	int right = 0;

	/* Caso base para salir de la recursividad */
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	number = left - right;

	return (number);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: number
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	return (right);
}
