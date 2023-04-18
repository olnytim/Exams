/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:44 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 17:22:36 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	first = octet % 2;
	unsigned char	second = (octet / 2) % 2;
	unsigned char	third = (octet / 2 / 2) % 2;
	unsigned char	fourth = (octet / 2 / 2 / 2) % 2;
	unsigned char	fifth = (octet / 2 / 2 / 2 / 2) % 2;
	unsigned char	sixth = (octet / 2 / 2 / 2 / 2 / 2) % 2;
	unsigned char	seventh = (octet / 2 / 2 / 2 / 2 / 2 / 2) % 2;
	unsigned char	eighth = (octet / 2 / 2 / 2 / 2 / 2 / 2 / 2) % 2;
	
	return (first * 2 * 2 * 2 * 2 * 2 * 2 * 2 + 
	second * 2 * 2 * 2 * 2 * 2 * 2 + 
	third * 2 * 2 * 2 * 2 * 2 +
	fourth * 2 * 2 * 2 * 2 +
	fifth * 2 * 2 * 2 +
	sixth * 2 * 2 +
	seventh * 2 +
	eighth);
}

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main()
{
	unsigned char	q = 13;
	print_bits(q);
	write(1, "\n", 1);
	print_bits(reverse_bits(q));
	return (0);
}
