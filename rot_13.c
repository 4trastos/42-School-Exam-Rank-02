/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:29:45 by davgalle          #+#    #+#             */
/*   Updated: 2024/02/24 16:41:05 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_root13(char c)
{
	char	*normal;
	char	*root13;
	int		i;

	i = 0;
	normal = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	root13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	while(normal[i] != '\0')
	{
		if (normal[i] == c)
		{
			c = root13[i];
			return (c);
		}
		else
			i++;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	char	char13;
	int		i;

	if (argc == 2 && argv[1][0] == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ')
			{
				char13 = ft_root13(argv[1][i]);
				ft_putchar(char13);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
