/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:42:10 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 15:48:48 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
