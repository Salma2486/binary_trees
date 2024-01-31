#include "binary_trees.h"
/**
 * binary_tree_uncle - Findsdtrg h
 * @node: A pointth ysrt hyr
 *
 * Return: A fxghnd
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
