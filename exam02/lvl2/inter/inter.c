/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:42:11 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 14:19:08 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int	i = 0;

	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (!inter(av[1], av[1][i], i) || inter(av[2], av[2][i], -1))
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
