/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:24:20 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 17:43:53 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *str, char c, int len)
{
	int	i = 0;
	
	while (str[i])
	{
		if ((str[i] == c) && (i < len))
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1)
{
	int	i = 0;

	while (str1[i])
	{
		if (!ft_strchr(str1, str1[i], i))
			write(1, &str1[i], 1);
		++i;
	}
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	
	if (ac == 3)
		while (av[1][i])
			i++;
		while (av[2][i])
			av[1][i++] = av[2][j++];
		ft_union(av[1]);
	write(1, "\n", 1);
	return (0);
}
