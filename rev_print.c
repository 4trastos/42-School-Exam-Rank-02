#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len)
	{
		ft_putchar(str[len - 1]);
		len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
