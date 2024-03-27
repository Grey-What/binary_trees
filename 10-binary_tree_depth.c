#include "binary_trees.h"
/**
 * binary_tree_depth - depth of node in binary tree
 *
 * @tree: pointer to node
 *
 * Return: NULL if tree is NULL, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
