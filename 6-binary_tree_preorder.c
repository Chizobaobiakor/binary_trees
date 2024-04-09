#include "binary_trees.h"

/**
 * binary_tree_preorder - Going through a binary tree used in pre-order traversal.
 * @tree: A pointer to the root node of the tree and to traverse.
 * @func: A pointer to a function to call for each node in the code.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
