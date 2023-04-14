/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:58:36 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/04/14 21:55:00 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		counter;
	int		integer;
	char	temp;

	counter = 0;
	while (str[counter])
		counter++;
	integer = -1;
	while (++integer < counter / 2)
	{
		temp = str[integer];
		str[integer] = str[counter - 1 - integer];
		str[counter - 1 - integer] = temp;
	}
	return (str);
}
