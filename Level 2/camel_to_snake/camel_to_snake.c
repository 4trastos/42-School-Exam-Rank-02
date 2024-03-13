#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	i;
	char	*str;
	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{	
				str[i] = str[i] + 32;
				write(1, "_", 1);
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
