#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	i;
	int	numb;
	int	sign;

	i = 0;
	numb = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + (str[i] - '0');
		i++;
	}
	return (numb * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int numb)
{
	if (numb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		numb = (numb % 1000000000 * -1);
	}
	if (numb < 0)
	{
		ft_putchar('-');
		numb = (numb * -1);
	}
	if (numb / 10 > 0)
		ft_putnbr(numb / 10);
	ft_putchar(numb % 10 + '0');
}

int	main(int argc, char **argv)
{
	int	numb;
	int	x;
	int	result;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		numb = ft_atoi(argv[1]);
		x = 1;
		result = 0;
		while (x <= 9)
		{
			result = numb * x;
			ft_putnbr(x);
			write(1, " x ", 3);
			ft_putnbr(numb);
			write(1, " = ", 3);
			ft_putnbr(result);
			write(1, "\n", 1);
			x++;
		}
	}
	return (0);
}
