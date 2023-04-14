/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:21:40 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 19:15:15 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int	negative;
	int	counter;

	if (!str)
		return (0);
	negative = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	counter = 0;
	while (*str >= '0' && *str <= '9')
	{
		counter = counter * 10 + *str - 48;
		str++;
	}
	return (counter * negative);
}
