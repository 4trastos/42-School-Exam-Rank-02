/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:03:41 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/04 21:00:27 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
