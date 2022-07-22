#include "binary_trees.h"

/**
* binary_tree_insert_right - Function that inserts a node as the right-child of
* another node
* @parent: Is a pointer to the node to insert the right-child in
* @value: Is the value to store in the new node
* Return: Pointer to the created node or NULL in case of failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	/* Check if there was an error with malloc */
	if (new_node == NULL)
		return (NULL);

	/*data configuration*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;

	/* Check if parent left already has a child */
	if (new_node->right != NULL)
		new_node->right->parent = new_node;

	/**
	 * We set the one that was the child as the new right child, in the example
	 * of the 2-main would be the number: 402
	 */
	return (new_node);
}
