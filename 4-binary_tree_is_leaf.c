#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leaf, no children
 *
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
