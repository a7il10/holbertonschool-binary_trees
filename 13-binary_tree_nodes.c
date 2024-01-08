#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 * @tree: count the number of nodes
 *
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    else if (tree->left != NULL || tree->right != NULL)
        return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    else
        return 0;
}
