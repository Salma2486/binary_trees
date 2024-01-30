#include "binary_trees.h"
/**
 *binary_tree_height - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lh = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rh = 1 + binary_tree_height(tree->right);

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
