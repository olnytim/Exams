/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:21:49 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 19:27:26 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	point;
	int	counter;

	point = 0;
	while (s[point])
	{
		counter = 0;
		while (reject[counter])
			if (s[point++] == reject[counter++])
				return (point);
	}
	return (point);
}
