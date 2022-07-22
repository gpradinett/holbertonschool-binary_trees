#include "binary_trees.h"

/**
* binary_tree_depth - funcion que mida la profundidad de un nodo en un árbol
* @tree: puntero al nodo a medir profundidad
* Return: num of depth of the node or 0.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	/* Base case to exit recursion */
	if (tree == NULL)
		return (0);

	/* Every time I can go up the tree I add 1 */
	if (tree->parent != NULL)
		n = binary_tree_depth(tree->parent) + 1;

	/*If it is 0 return 0, and if not the number of depths obtained*/
	return (n);
}
