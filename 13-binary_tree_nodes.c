#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to be counted
 * Return: size
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			return ((binary_tree_nodes(tree->left)) +
					(binary_tree_nodes(tree->right)) + 1);
	}
	return (0);
}
