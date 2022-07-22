#include "binary_trees.h"

/**
* binary_tree_nodes - count the number of nodes that have children
* @tree: pointer to the node (root) of the tree
* Return: number of nodes or 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	/**
	 * I check that it continues to have children to add if it has them
	 * I add the node susing recursion.
	 */

	if (tree->left != NULL || tree->right != NULL)
		nodes = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right))
		+ 1; /* throw one down for betty */

	return (nodes);
}
