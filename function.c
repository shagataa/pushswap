/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** function
*/

#include "pushswap.h"
#include "my.h"

void s_print(int nbr, int nbr2, node *nodes, bool first)
{
    if (first)
        my_putstr("sa ");
    else
        my_putstr("sb ");

    (*nodes)->data = nbr2;
    (*nodes)->next->data = nbr;
}

void sc_print(node l_a, node l_b)
{
    int tmp;

    my_putstr("sc ");
    tmp = l_a->data;
    l_a->data = l_a->next->data;
    l_a->next->data = tmp;
    tmp = l_b->data;
    l_b->data = l_b->next->data;
    l_b->next->data = tmp;
}

static node push_b(node *l_a, node *l_b)
{
    node tmp;
    node tmp2;

    if (*l_a == NULL)
        return *l_b;
    tmp = *l_a;
    tmp2 = (*l_a)->next;
    tmp->next = *l_b;
    *l_a = tmp2;
    *l_b = tmp;
    return *l_b;
}

node p_print(node *l_a, node *l_b, bool first)
{
    if (!first) {
        my_putstr("pb ");
        return push_b(l_a, l_b);
    } else {
        my_putstr("pa ");
        return push_b(l_b, l_a);
    }
}
