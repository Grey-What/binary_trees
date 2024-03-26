#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse tree using pre-order traversal
 *
 * @tree: pointer to node of tree
 * @func: pointer to function that call each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
