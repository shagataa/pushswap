/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** display
*/

#include "pushswap.h"
#include "my.h"

void print_debug(node l_a, node l_b)
{
    my_putstr("list a: ");
    for (node tmp = l_a; tmp; tmp = tmp->next)
        my_printf("%i ", tmp->data);
    my_putstr("\nlist b: ");
    for (node tmp = l_b; tmp; tmp = tmp->next)
        my_printf("%i ", tmp->data);
    write(1, "\n", 1);
}

void print_list(node l_a, node l_b, bool debug)
{
    if (debug) {
        print_debug(l_a, l_b);
        return;
    }
    for (node tmp = l_a; tmp; tmp = tmp->next)
        my_printf("%i ", tmp->data);
}
