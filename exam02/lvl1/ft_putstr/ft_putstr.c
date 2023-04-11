/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   ft_putstr.c                                        |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/11 17:06:50 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/11 17:13:36 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	ft_putstr("hello there");
	return (0);
}
