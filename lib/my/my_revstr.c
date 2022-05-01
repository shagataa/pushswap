/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_revstr
*/

void my_putchar(char c);

int my_strlen(char const *str);

int my_putstr2(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}

char *my_revstr(char *str)
{
    int i = 0;
    int endstr = my_strlen(str) - 1;
    char tempo;

    for (; i < endstr; i++, endstr--) {
        tempo = str[i];
        str[i] = str[endstr];
        str[endstr] = tempo;
    }
    return str;
}
