#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree.
* The height of the node is the distance from that node to the deepest node
* of the tree.
* @tree: Pointer to the root node of the tree to measure the height.
* Return: return the height or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	/* Base case to exit recursion */
	if (tree == NULL)
		return (0);

	/**
	 * If the next node on both the left and right sides is NULL it means
	 * which is a leaf (it is the last node, so the hight will be: 0).
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Count the height recursively, add 1 each pass: */
	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);

	/* If left side is greater than right then return left side */
	if (height_left >= height_right)
	{
		return (height_left);
	}
	else
	{
		return (height_right);
	}
}
