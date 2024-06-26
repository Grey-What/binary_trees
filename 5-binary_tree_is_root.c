#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is a root
 *
 * @node: node to check
 *
 * Return: 1 if it is a root, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
