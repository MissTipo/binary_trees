#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the value of a node in pre-order traverse
 * @tree: tree to be passed
 * @func: function to print number
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)((*tree).n);
}
