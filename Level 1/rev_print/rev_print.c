/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:19:02 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/09 10:38:12 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int z;
	char *str;
	char *new;

	if (argc == 2)
	{
		i = 0;
		z = 0;
		str = argv[1];
		while (str[z] != '\0')
			z++;
		new = malloc(z + 1);
		new[z] = '\0';
		z--;
		while (str[i] != '\0')
		{
			new[z] = str[i];
			i++;
			z--;
		}
		ft_putchar(new);
	}
	write(1, "\n", 1);
	return (0);
}
