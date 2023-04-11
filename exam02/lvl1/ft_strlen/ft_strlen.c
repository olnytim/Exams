/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   ft_strlen.c                                        |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/04/11 18:45:44 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/04/11 18:48:37 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
