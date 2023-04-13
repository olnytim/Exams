/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   rev_print.c                                        |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/13 23:34:00 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/13 23:42:12 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		++counter;
	while (counter > -1)
		write(1, &str[counter--], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev(av[1]);
	write(1, "\n", 1);
	return (0);
}
