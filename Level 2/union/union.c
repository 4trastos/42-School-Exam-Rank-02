/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:43:06 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/09 13:10:33 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
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

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_charcmp(char c, char *aux, int z)
{
	int i = 0;
	int count = 0;
	while (aux[i] && z > 0)
	{
		if (aux[i] == c)
			return (1);
		i++;
		z--;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int z;
	int flag;
	char *str;
	char *dst;
	char *aux;

	if (argc == 3)
	{
		i = 0;
		z = 0;
		flag = 0;
		str = argv[1];
		dst = argv[2];
		aux = malloc (ft_strlen(str) + ft_strlen(dst) + 1);
		while (str[i] != '\0')
		{
            if (ft_charcmp(str[i], aux, z) ==  0)
			{
			   	aux[z] = str[i];
				z++;
			}
            i++;
		}
		i = 0;
		while (dst[i] != '\0')
		{
			if (ft_charcmp(dst[i], aux, z) ==  0)
			{
			   	aux[z] = dst[i];
				z++;
			}
            i++;

		}
		aux[z] = '\0';
		ft_putchar(aux);
	}
	write(1, "\n", 1);
	return (0);
}
