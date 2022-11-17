#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks for the leaf in a binary tree
 * @node: a pointer to node to check
 * Return: 1 if node id leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && (node->right == NULL && node->left == NULL))
		return (1);
	else
		return (0);
}
