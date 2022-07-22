#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int value;
	binary_tree_t *left;
	binary_tree_t *right;

	/* Check if tree or func are NULL */
	if (tree == NULL || func == NULL)
		return;

	value = tree->n;
	left = tree->left;
	right = tree->right;

	/* Traverse left side with recursion */
	binary_tree_postorder(left, func);
	/* Traverse right side with recursion */
	binary_tree_postorder(right, func);
	/* Call func with the data value of tree (parameter 'n' of the struct) */
	func(value);
}
