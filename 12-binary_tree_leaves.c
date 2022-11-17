#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to be counted
 * Return: amount of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;


	if (tree)
	{
		leaves += (!tree->left && !tree->right);
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->left);
	}

	return (leaves);
}
