/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** insertion
*/

#include "pushswap.h"
#include "my.h"

static node init_node(int nbr)
{
    node tmp = malloc(sizeof(node_t));

    if (tmp == NULL)
        return NULL;
    tmp->data = nbr;
    tmp->next = NULL;
    return tmp;
}

node insert(node l_a, int nbr)
{
    node new_node = init_node(nbr);
    node tmp;

    if (l_a == NULL) return new_node;
    for (tmp = l_a; tmp->next; tmp = tmp->next);
    tmp->next = new_node;
    return l_a;
}
