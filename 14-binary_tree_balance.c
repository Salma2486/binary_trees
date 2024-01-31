#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, lh = 0, rh = 0;

	if (tree == NULL)
		return (balance_factor);

	if (tree->left)
		lh = binary_tree_node_height(tree->left, 0);

	if (tree->right)
		rh = binary_tree_node_height(tree->right, 0);

	balance_factor = lh - rh;

	return (balance_factor);
}

/**
 * binary_tree_node_height - cw4y 5w46y k
 * @node: sry hse5ys
 * @h: srtj nse ty
 * Return: Height of the subtree
 */

int binary_tree_node_height(const binary_tree_t *node, int h)
{
	int lh, rh;

	if (node == NULL)
		return (h);

	lh = binary_tree_node_height(node->left, h + 1);
	rh = binary_tree_node_height(node->right, h + 1);

	return (lh > rh ? lh : rh);
}
