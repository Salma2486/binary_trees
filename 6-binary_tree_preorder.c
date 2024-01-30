#include "binary_trees.h"
/**
 *binary_tree_preorder - This is the entry point of the code
 *@func: srty h
 *@tree: srtgy y
 *Return:0 Success
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
