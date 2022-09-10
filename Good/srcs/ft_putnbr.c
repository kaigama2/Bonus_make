#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr == -12345678)
    {
        ft_putnbr(nbr / 10);
        ft_putchar('8');
    }
    // else if condition makes d printout
    // single while if condition makes d
    // printout double
    else if (nbr < 0)
    {
        ft_putchar('-');
    // with apostrophe it output char characters
    // and with apostrophe it output the given
    // number given as argument
        ft_putnbr(-nbr);
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr(nbr / 10);
        }
        ft_putchar(48 + nbr % 10);
    }
}
// int main()
// {
//     ft_putnbr(-12345678);
//     return (0);
// }

