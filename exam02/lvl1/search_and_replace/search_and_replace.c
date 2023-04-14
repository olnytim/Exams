/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:26:30 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 15:36:18 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_rep(char *str, char *find, char *repl)
{
	while (*str)
	{
		if (*str == *find)
			*str = *repl;
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 &&  !av[2][1] && !av[3][1])
		search_rep(av[1], av[2], av[3]);
	write(1, "\n", 1);
	return (0);
}
