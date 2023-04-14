/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:55:20 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 18:20:20 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	do_op(char *first, char *oper, char *second)
{
	int	fn;
	int	sn;
	int	result;

	result = 0;
	fn = atoi(first);
	sn = atoi(second);
	if (*oper == '+')
		result = fn + sn;
	else if (*oper == '-')
		result = fn - sn;
	else if (*oper == '*')
		result = fn * sn;
	else if (*oper == '/')
		result = fn / sn;
	return (result);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%d", do_op(av[1], av[2], av[3]));
	else
		write(1, "\n", 1);
	return (0);
}
