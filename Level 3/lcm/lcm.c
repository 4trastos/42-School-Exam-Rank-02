/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:33:27 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/07 18:37:33 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	number;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		number = a;
	else
		number = b;
	while (1)
	{
		if (number % a == 0 && number % b == 0)
			return (number);
		number++;
	}
}
