#include "binary_trees.h"
/**
 *binary_tree_height - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh =  binary_tree_height(tree->right);

	if (lh > rh)
		return (lh);
	return (rh);
}
