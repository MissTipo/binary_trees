#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node passed if the root
 * @node: the node to check
 * Return: 1 if true otherwisw 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
