/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:43:33 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/04 19:18:30 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int numb;
	char c;

	if (argc == 2)
	{
		i = 0;
		numb = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if ((argv[1][i] < 'n' && argv[1][i] >= 'a') || (argv[1][i] >= 'A' && argv[1][i] < 'N'))
				{	
					c = argv[1][i] + 13;
					write(1, &c, 1);
				}
				if (argv[1][i] > 'm' && argv[1][i] <='z') 
				{
					numb = 'z' - argv[1][i];
					numb = 13 - numb;
					c = 96 + numb;
					write(1, &c, 1);
				}
				if (argv[1][i] > 'M' && argv[1][i] <= 'Z')
				{
					numb = 'Z' - argv[1][i];
					numb = 13 - numb;
					c = 64 + numb;
					write(1, &c, 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
