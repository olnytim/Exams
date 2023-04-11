/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   first_word.c                                       |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/04 18:43:00 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/04 18:56:53 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t' || *str == '\f' || *str == '\r')
		str++;
	while (!(*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t' || *str == '\f' || *str == '\r'))
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}
