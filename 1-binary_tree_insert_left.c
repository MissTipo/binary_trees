#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts value to the left side of the tree
 * @parent: parent of the tree to be inserted
 * @value: value to be inserted
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;


	new_tree = binary_tree_node(parent, value);
	new_tree->parent = parent;

	if (parent->left != NULL)
	{
		new_tree->left = parent->left;
		parent->left->parent = new_tree;
	}
	parent->left = new_tree;

	return (new_tree);
}
