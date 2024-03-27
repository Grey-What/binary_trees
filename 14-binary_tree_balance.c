#include "binary_trees.h"
/**
 * bt_height - determines the height of of a tree
 *
 * @tree: pointer to root of the node the tree
 *
 * Return: height or 1
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
	{
		return (0);
	}

	l_height = tree->left ? 1 + bt_height(tree->left) : 1;
	r_height = tree->right ? 1 + bt_height(tree->right) : 1;
	return (l_height > r_height ? l_height : r_height);
}

/**
 * binary_tree_balance - measures the balancing factor of a tree
 *
 * @tree: pointer to the root of the tree
 *
 * Return: 0 if tree is NULL, else difference in blanace/height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, diff = 0;

	if (tree != NULL)
	{
		l_height = ((int)bt_height(tree->left));
		r_height = ((int)bt_height(tree->right));
		diff = l_height - r_height;
	}
	return (diff);
}
