/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:34 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/07 18:18:43 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	int	z;
	char *str;

	if (argc == 2)
	{
		i = 0;
		len = 0;
		z = 0;
		str = argv[1];
		while (str[z] != '\0')
			z++;
		while (str[len] == ' ')
			len++;
		if (len == z)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (str[i] == ' ')
			i++;
		while (str[i] != ' ' && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
