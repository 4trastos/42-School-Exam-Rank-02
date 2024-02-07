#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i + 1] != ' ')
			ft_putchar(s[i]);
		if (s[i] != ' ' && s[i + 1] == ' ' && s[i + 2] != '\0')
		{
			ft_putchar(s[i]);
			ft_putchar(' ');
		}
		if (s[i] != ' ' && s[i + 1] == ' ' && s[i + 2] == '\0')
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
