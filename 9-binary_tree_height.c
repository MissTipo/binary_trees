#include "binary_trees.h"

/**
 * binary_tree_height - counts the height of tree from the node passed
 * @tree: the node passed
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Rheight = 0, Lheight = 0;


	if (tree == NULL)
		return (0);

	if (tree->left)
		Lheight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		Rheight = binary_tree_height(tree->right) + 1;

	if (Rheight > Lheight)
		return (Rheight);
	return (Lheight);
}
