/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:03:43 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/06 11:28:45 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '_')
			j++;
		i++;
	}
	i = i - j;
	return (i);
}

int	main(int argc, char** argv)
{
	int	i;
	char *str;
	char *aux;
	int	len;

	if (argc == 2)
	{
		i = 0;
		aux = argv[1];
		len = ft_strlen(aux);
		str = malloc(len + 1);
		while (aux[i])
		{
			if (aux[i] == '_')
				{
					i++;
					aux[i] = aux[i] - 32;
				}
			str[i] = aux[i];
			write(1, &str[i], 1);
			i++;
		}
		str[i] = '\0';
		free(str);
	}
	write(1, "\n", 1);
	return (0);
}
