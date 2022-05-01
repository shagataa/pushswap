/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** algo
*/

#include "pushswap.h"
#include "my.h"

static void algo(node *l_a, node *l_b)
{
    node tmp;

    if (*l_a == NULL)
        return;
    tmp = *l_a;
    while (tmp->next != NULL) {
        if (tmp->data > tmp->next->data)
            s_print((*l_a)->data, (*l_a)->next->data, l_a, true);
        if (l_b == NULL)
            *l_b = p_print(l_a, l_b, false);
        else p_print(l_a, l_b, false);
        tmp = *l_a;
    }
    p_print(l_a, l_b, false);
    for (tmp = *l_b; tmp; tmp = *l_b) {
        if (l_a == NULL) {
            *l_a = p_print(l_a, l_b, true);
            continue;
        }
        p_print(l_a, l_b, true);
    }
}

void verif_next(node *l_a, node *l_b)
{
    for (node tmp = *l_a; tmp->next; tmp = tmp->next) {
        if (tmp->data > tmp->next->data) {
            algo(l_a, l_b);
            return verif(l_a, l_b);
        }
    }
}

bool verif(node *l_a, node *l_b)
{
    bool finish = true;

    for (node tmp = *l_a; tmp->next; tmp = tmp->next) {
        if (tmp->data > tmp->next->data) {
            finish = false;
        }
    }
    if (finish)
        return finish;
    while (!finish) {
        verif_next(l_a, l_b);
        break;
    }
    return finish;
}
