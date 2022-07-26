#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
		/**
		 * A node is a leaf node if both left and right child nodes of it are
		 * NULL.
		 */
	return (0); /* If the node argument is NULL return 0 */
}
