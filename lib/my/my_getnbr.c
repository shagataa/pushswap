/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-3-cpoolday07-shagata.sri-chandan-das
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int isneg = 1;
    int i = 0;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            isneg = isneg * -1;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
        } else
            return nb * isneg;
    }
    return nb * isneg;
}
