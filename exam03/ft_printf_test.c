#include <unistd.h>
#include <stdarg.h>

void	ft_put_s(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		*len += write(1, str, 1);
		++str;
	}
}

void	ft_put_d(long long int num, int base, int *len)
{
	char	*out = "0123456789abcdef";
	if (num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		ft_put_d(num / base, base, len);
	*len += write(1, &out[num % base], 1);
}

int	ft_printf(const char *form, ... )
{
	va_list	p;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(p, form);
	while(form[i])
	{
		if (form[i] == '%' && (form[i + 1] == 's' || form[i + 1] == 'd' || form[i + 1] == 'x'))
		{
			++i;
			if (form[i] == 's')
				ft_put_s(va_arg(p, char *), &len);
			else if (form[i] == 'd')
				ft_put_d((long long int)va_arg(p, int), 10, &len);
			else if (form[i] == 'p')
				ft_put_d((long long int)va_arg(p, unsigned int), 16, &len);
		}
		else
			len += write(1, &form[i], 1);
		i++;
	}
	va_end(p);
	return (len);
}

int	main(void)
{
	ft_printf("the word is: %s", "hello there");
}
