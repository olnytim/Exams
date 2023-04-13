/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   rot_13.c                                           |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/13 23:43:35 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/13 23:58:58 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 'a' + 13) % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = (*str - 'A' + 13) % 26 + 'A';
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot(av[1]);
	write(1, "\n", 1);
	return (0);
}
