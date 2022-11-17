#include "binary_trees.h"

/**
 * binary_tree_node - creates a tree node
 * @parent: parent of tree node
 * @value: value to be passed to the tree node
 *
 * Return: tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;


	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);
	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	return (new_tree);
}
