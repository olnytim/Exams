/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:45:52 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 17:56:23 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str, char *check)
{
	int	i = 0;
	int length = 0;

	while (str[length])
		++length;
	while (*check)
	{
		if (*check == str[i])
			++i;
		check++;
	}
	if (length == i)
		while (*str)
			write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
