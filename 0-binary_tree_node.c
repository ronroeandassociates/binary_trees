#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
