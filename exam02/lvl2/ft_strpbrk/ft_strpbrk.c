/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:49:40 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 19:57:38 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	counter;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		counter = 0;
		while (s2[counter])
		{
			if (*s1 == s2[counter])
				return (s1);
			++counter;
		}
		++s1;
	}
	return (0);
}
