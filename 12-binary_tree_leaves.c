#include "binary_trees.h"
/**
 *binary_tree_leaves - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll, rl;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);

	return (ll + rl);
}
