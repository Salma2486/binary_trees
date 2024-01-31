#include "binary_trees.h"
/**
 *binary_tree_balance - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
