#include "binary_trees.h"

/**
* binary_tree_delete - Function that deletes an entire binary tree
* @tree: pointer to the root node of the tree to delete
* Return: If tree is NULL, do nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	/* Base condition to exit recursion */
	if (tree == NULL)
		return;

	left = tree->left;
	if (left != NULL)
	/* Recursive delete for left side of tree*/
		binary_tree_delete(left);

	right = tree->right;
	if (right != NULL)
	/* Recursive delete for right side of tree */
		binary_tree_delete(right);

	free(tree);/* free */
}
