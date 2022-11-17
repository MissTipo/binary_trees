#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of the node passed
 * @node: node to find the uncle
 * Return: a pointer to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent->parent == NULL || node->parent == NULL)
			return (0);
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		return (node->parent->parent->left);
	}
	return (0);
}
