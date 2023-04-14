/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:29:46 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 17:36:43 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = 90 - *str + 65;
		else if (*str >= 97 && *str <= 122)
			*str = 122 - *str + 97;
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
