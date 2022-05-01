/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
** File description:
** pushswap
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdarg.h>

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_

typedef struct node_s {
    int data;
    struct node_s *next;
} node_t;

typedef node_t *node;

node insert(node l_a, int nbr);
node p_print(node *l_a, node *l_b, bool first);
void print_list(node l_a, node l_b, bool debug);
void s_print(int nbr, int nbr2, node *nodes, bool first);
void sc_print(node l_a, node l_b);
bool verif(node *l_a, node *l_b);
void my_printf(char *str, ...);
void my_cases(char *str, int *i, va_list ap);

#endif /* !PUSHSWAP_H_ */
