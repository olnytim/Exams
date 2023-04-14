/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:29:12 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 19:56:24 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*result;

	counter = 0;
	while (src[counter])
		++counter;
	result = malloc(counter + 1);
	if (!result)
		return (NULL);
	counter = 0;
	while (*src)
		result[counter++] = *src++;
	result[counter] = '\0';
	return (result);
}
