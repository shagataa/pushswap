/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}
