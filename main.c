/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** main
*/

#include "my.h"
#include "pushswap.h"

int main(int ac, char **av)
{
    node l_a = NULL, l_b = NULL;

    if (ac == 1) {
        my_putstr("error\n");
        return 84;
    }
    for (int i = 1; i != ac; i++) {
        if (l_a == NULL) {
            l_a = insert(l_a, my_getnbr(av[i]));
            continue;
        }
        insert(l_a, my_getnbr(av[i]));
    }
    if (!verif(&l_a, &l_b))
        write(1, "sb", 2);
    write(1, "\n", 1);
    return 0;
}
