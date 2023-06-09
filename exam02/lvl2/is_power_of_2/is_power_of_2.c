/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:34:21 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 14:38:07 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	number = 1;

	while (number <= n)
	{
		if (number == n)
			return (1);
		number *= 2;
	}
	return (0);
}
