#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long int n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
        ft_putnbr(n);
    }
    else if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putchar((n % 10) + 48);
    }
    else
        ft_putchar(n + 48);
}

/*int main()
{
    ft_putnbr(-545645);
    return(0);
}*/