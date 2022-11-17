#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a tree
 * @tree: depth to tree to be measured
 * Return: depth value
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
