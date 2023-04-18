/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:39:21 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 14:50:22 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last(char *str)
{
	int	i = 0;
	int j = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		++i;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && (str[i + 1] >= 32 && str[i + 1] <= 126))
			j = i + 1;
		++i;
	}
	while (str[j] >= 32 && str[j] <= 126)
		write(1, &str[j++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last(argv[1]);
	write(1, "\n", 1);
	return (0);
}
