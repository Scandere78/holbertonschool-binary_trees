#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Crée trois noeud binaire
 * @value: pour mettre dans le nouveau noeud
 * @parent: Pointer to the parent node of the node to create
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
