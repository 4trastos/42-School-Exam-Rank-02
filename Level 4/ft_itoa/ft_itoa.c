/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:55:54 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/07 13:00:46 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	int n = nbr;
	int len = 0;
	if (nbr <= 0)
	{
		len++;
    }
	while (n) 
	{
		n /= 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL) 
		return NULL;
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return(result);
	}
	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr) 
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}
