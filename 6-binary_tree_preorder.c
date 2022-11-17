#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the value of a node in pre-order traverse
 * @tree: tree to be passed
 * @func: function to print number
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	(*func)((*tree).n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
