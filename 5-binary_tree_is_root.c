#include "binary_trees.h"
/**
 *binary_tree_is_root - This is the entry point of the code
 *@node: setyh agy
 *Return:0 Success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
