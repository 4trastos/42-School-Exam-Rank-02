/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:00:17 by davgalle          #+#    #+#             */
/*   Updated: 2024/02/24 23:11:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *array;
	array = (int *)malloc(sizeof(int) * (end - start));
	while (end >= start)
	{
		array[i] = end;
		end--;
		i++;
	}
	return (array);
}
