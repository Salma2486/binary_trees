#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lh = binary_tree_node_height(tree->left, 0);
	rh = binary_tree_node_height(tree->right, 0);
	if (lh == rh &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
	{
		return (1);
	}
	return (0);
}
int binary_tree_node_height(const binary_tree_t *node, int h)
{
	int lh, rh;

	if (node == NULL)
		return (h);

	lh = binary_tree_node_height(node->left, h + 1);
	rh = binary_tree_node_height(node->right, h + 1);

	return (lh > rh ? lh : rh);
}
