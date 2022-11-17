#include "binary_trees.h"

/**
 * binary_tree_inorder - prints the value of a node in pre-order traverse
 * @tree: tree to be passed
 * @func: function to print number
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	(*func)((*tree).n);
	binary_tree_inorder(tree->right, func);
}
