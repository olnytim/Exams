/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   fizzbuzz.c                                         |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/11 15:24:46 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/11 16:55:42 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	counter;
	char	i;
	char	str[10] = "0123456789";

	counter = 0;
	while (counter++ < 100)
	{
		i = counter;
		if (counter % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (counter % 5 == 0)
			write(1, "buzz", 4);
		else if (counter % 3 == 0)
			write(1, "fizz", 4);
		else
		{
			if (i > 9)
				write(1, &str[i / 10], 1);
			write(1, &str[i % 10], 1);
		}
		write(1, "\n", 1);
	}
}

