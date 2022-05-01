/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
