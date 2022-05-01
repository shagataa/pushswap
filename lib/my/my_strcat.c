/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, const char *src)
{
    int dest_strlen = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[dest_strlen + i] = src[i];
    dest[dest_strlen + i] = '\0';
    return dest;
}
