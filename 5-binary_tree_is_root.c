#include "binary_trees.h"

/**
* binary_tree_is_root - chec if a given node is a root
* we check that it has no parent.
* @node: is the node to check
* Return: is NULL, return 0, root? return 1
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* we know that it is the only node that does not have a parent */
	if (node->parent == NULL)
		return (1);

	/*In any other case*/
	return (0);
}
