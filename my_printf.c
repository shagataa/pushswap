/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** my_printf
*/

#include "my.h"
#include "pushswap.h"

void my_cases(char *str, int *i, va_list ap)
{
    switch (str[*i]) {
        case 'i': my_put_nbr(va_arg(ap, int));
        break;
    }
}

void my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            my_cases(str, &i, ap);
        } else
            my_putchar(str[i]);
    }
    va_end(ap);
}