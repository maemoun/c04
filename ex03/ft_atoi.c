#include <unistd.h>
//#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int total;
    int sign;
    i = 0;
    total = 0;
    sign = 1;
    while(str[i] == ' ' ||(str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        total = (total * 10) + (str[i] - 48);
        i++;
    }
    return(total * sign);
}

/*int main()
{
    char str[] = "  ---+--+1234ab567";
    printf("%d\n", ft_atoi(str));
    return(0);
}*/