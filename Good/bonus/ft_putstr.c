#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        write (1, str++, 1);
    }
}
