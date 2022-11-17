#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a tree is perfect
 * @node: tree to be checked
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->right == NULL && node->left == NULL)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_height - check if a tree is perfect
 * @tree: tree to be checked
 * Return: 1 if true 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		return (l + 1);
	return (r + 1);
}
/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: tree to be checked
 * Return: 1 if true 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree)
	{
		l = tree->left;
		r = tree->right;
		if (binary_tree_is_leaf(tree))
			return (1);
		if (l == NULL || r == NULL)
			return (0);
		if (binary_tree_height(l) == binary_tree_height(r))
		{
			if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
				return (1);
		}
	}
		return (0);
}
