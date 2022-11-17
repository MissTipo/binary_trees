#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a tree is full
 * @tree: tree to be checked
 * Return: 1 if true or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			return (1);
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
	}
	return (0);
}
