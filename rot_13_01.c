/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:29:45 by davgalle          #+#    #+#             */
/*   Updated: 2024/02/24 17:08:21 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot13(char *str)
{
	int	i;
	char	rot;

	i = 0;
	while(str[i])
	{
		rot = str[i];
		if (rot >= 97 && rot <= 122)
		{
			rot = str[i] - 97;
			rot = ((rot + 13) % 26) + 97;
		}
		else if (rot >= 65 && rot <= 90)
		{
			rot = str[i] - 65;
			rot = ((rot + 13) % 26) + 65;
		}
		write(1, &rot, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if (argc == 2)
		rot13(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
