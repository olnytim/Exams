/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   repeat_alpha.c                                     |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/13 23:15:06 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/13 23:31:47 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			counter = (*str + 1 - 'a');
			while (counter-- > 0)
				write(1, str, 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			counter = (*str + 1 - 'A');
			while (counter-- > 0)
				write(1, str, 1);
		}
		else
			write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
