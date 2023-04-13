/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   rotone.c                                           |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/14 00:00:24 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/14 00:08:15 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
			*str = *str + 1;
		else if (*str == 'z' || *str == 'Z')
			*str = *str - 25;
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
