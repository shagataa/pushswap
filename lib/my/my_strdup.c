/*
** EPITECH PROJECT, 2021
** B-CPE-101-PAR-1-3-bistromatic-shagata.sri-chandan-das
** File description:
** my_strdup
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

char *my_strdup(char *str)
{
    int len_count;
    char *dup_count;

    len_count = my_strlen(str) + 1;
    dup_count = malloc(len_count);
    if (dup_count == NULL)
        return (NULL);
    dup_count = my_strcpy(dup_count, str);
    dup_count[len_count - 1] = '\0';
    return (dup_count);
}
