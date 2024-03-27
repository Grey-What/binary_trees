#include "binary_trees.h"
/**
* bt_size - size of a binary.
*
* @tree: pointer to the root node of the tree.
*
* Return: void
*/
size_t bt_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_size(tree->left) + bt_size(tree->right) + 1);
}

/**
* bt_leaves - counts the leaves.
*
* @tree: pointer to the root node of the tree.
*
* Return: 0
*
*/
size_t bt_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (bt_leaves(tree->left) + bt_leaves(tree->right));
}

/**
 * binary_tree_nodes - counts noes with atleast one child
 *
 * @tree: pointer to tree root
 *
 * Return: 0 if tree is NULL, else count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (bt_size(tree) - bt_leaves(tree));
}
