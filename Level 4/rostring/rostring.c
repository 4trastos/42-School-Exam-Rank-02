/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:13:57 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/11 18:56:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;
	char *str = argv[1];
	int j = 0;
	while (str[j] != '\0')
		j++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		i++;
	while(str[i] != '\0')
	{
		while ((str[i] == ' ' && str[i - 1] == ' ') || (str[i] == '\t' && str[i - 1] == '\t'))
			i++;
		if (i < j)
			write(1, &str[i], 1);
		i++;
	}
	while(start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
	write(1, "\n", 1);
	return(0);
}
