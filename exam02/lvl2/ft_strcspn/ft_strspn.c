/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:58:43 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/18 14:06:22 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		++str;
	}
	return (0);
}

size_t	ft_strspn(const char *str, const char *accept)
{
	size_t	i = 0;

	while (str[i])
	{
		if (ft_strchr(accept, str[i]) == 0)
			break;
		++i;
	}
	return (i);
}
