/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:42:28 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/06 19:57:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int c;

	if (argc == 2)
	{
		i = 0;
		c = 1;
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' && c == 0 && argv[1][i + 1] != '\0')
			{
				write(1, &argv[1][i], 1);
				c = 1;
				i++;
			}
			if (argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				c = 0;
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
