#include "binary_trees.h"
/**
 *binary_tree_size - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ls, rs;

	if (tree == NULL)
		return (0);
	ls = binary_tree_size(tree->left);
	rs = binary_tree_size(tree->right);
	return (ls + rs + 1);
}
