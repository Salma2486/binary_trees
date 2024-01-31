#include "binary_trees.h"
/**
 *binary_tree_depth - This is the entry point of the code
 *@tree: srt gh
 *Return:0 Success
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
