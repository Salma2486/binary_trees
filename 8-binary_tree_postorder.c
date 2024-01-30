#include "binary_trees.h"
/**
 *binary_tree_postorder - This is the entry point of the code
 *@tree: srt gh
 *@func: srty gset
 *Return:0 Success
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
