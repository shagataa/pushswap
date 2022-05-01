/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, const char *src, int n)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}
