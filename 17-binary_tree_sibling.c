#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 * Return: If node is NULL, the parent is NULL, or node has no sibling,
 * return NULL. Otherwise, return a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)

		return (node->parent->right);

	return (node->parent->left);
}

