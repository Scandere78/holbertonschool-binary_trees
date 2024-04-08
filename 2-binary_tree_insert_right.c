#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud en tant que fils droit d'un autre nœud
 * @parent: Pointeur vers le nœud dans lequel insérer le fils droit
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Un pointeur vers le nœud créé, ou NULL en cas d'échec ou si parent est NULL
 * Si parent a déjà un fils droit, le nouveau nœud prendra sa place, et l'ancien fils droit
 * sera défini comme le fils droit du nouveau nœud.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *old_right_child;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        old_right_child = parent->right;
        parent->right = new_node;
        new_node->right = old_right_child;
        old_right_child->parent = new_node;
    }
    else
    {
        parent->right = new_node;
    }

    return (new_node);
}

