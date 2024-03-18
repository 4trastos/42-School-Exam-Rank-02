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

int check(int c, char *str, int index)
{
	int i = 0;
	
	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

int main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
	int k = 0;
	char *str = argv[1];
	char *s2 = argv[2];
	
	if (argc == 3)
	{
		while(str[i] != '\0')
			i++;
		while(s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		i--;
		while(k <= i)
		{
			if(check(str[k], str, k) == 1) 
				write (1, &str[k], 1); 
			k++;
		}
	}
	write (1, "\n", 1);
}
