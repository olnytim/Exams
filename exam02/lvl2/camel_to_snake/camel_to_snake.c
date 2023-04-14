/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:38:21 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 17:43:29 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str += 32;
		}
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		camel(av[1]);
	write(1, "\n", 1);
	return (0);
}
