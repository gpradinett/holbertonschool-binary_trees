#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree, leaves are nodes
* with no children
* @tree: Pointer to the parent node
* Return: Number of leaves, if the tree is NULL return 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	/* Condition for a node to be a leaf - no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* We add the returns that have given 1 for being a leaf */
	n = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (n);
}
