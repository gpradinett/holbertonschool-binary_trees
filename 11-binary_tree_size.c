#include "binary_trees.h"

/**
* binary_tree_size - function to measure the size of a binary tree
* The size of a tree is the sum of all nodes.
* @tree: pointer to node(root) of the tree to measure the size.
* Return: Tree size or 0 if the tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	/*Recursion termination condition*/
	if (tree == NULL)
		return (0);

	n = binary_tree_size(tree->left);
	n = n + binary_tree_size(tree->right) + 1;

	return (n);
}
