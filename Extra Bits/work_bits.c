/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:05:52 by davgalle          #+#    #+#             */
/*   Updated: 2024/03/23 11:12:02 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i > 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
	write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;

	while (i > 0)
	{
		bit = bit * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (bit);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void)
{
	unsigned char  octet = 9;
	printf("%hhu\n", reverse_bits(octet));
	unsigned char bits = (unsigned char)NULL;
	print_bits(bits);
	unsigned char swap = 'B';
	printf("%hhu", swap_bits(swap));
	return (0);
}
