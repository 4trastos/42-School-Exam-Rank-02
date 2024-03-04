/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:23:10 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/04 19:29:13 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		max(int* tab, unsigned int len)
{
	int	i;
	int	numb;

	if (!tab)
		return (0);
	i = 0;
	numb = tab[i];
	while (i < len)
	{
		if (numb < tab[i])
			numb = tab[i];
		i++;
	}
	return (numb);
}
