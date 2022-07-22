#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: the parent of the next node
 * @value: the node value
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	/* Check if parent is NULL */
	new_node = malloc(sizeof(binary_tree_t));
	/* Check if there was an error with malloc */
	if (new_node == NULL)
		return (NULL);

	/*seteo de data*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left = new_node;

	/* Check if parent left already has a child */
	if (new_node->left != NULL)
	/* Set the parent of the node to the left of the current parent */
		new_node->left->parent = new_node;

	new_node->right = NULL;

	return (new_node);
}
