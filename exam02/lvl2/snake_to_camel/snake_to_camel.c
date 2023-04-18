/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:00:07 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 17:17:44 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	snake(char *str)
{
	int	i = 0;
	i = 0;
	while (*str)
	{
		if (*(str) == '_')
		{
			++str;
			*str -= 32;
		}
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		snake(av[1]);
	write(1, "\n", 1);
	return (0);
}
