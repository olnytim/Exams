#include <unistd.h>
#include <stdarg.h>

int	*put_s(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		*len += write(1, str, 1);
		++str;
	}
	return (len);
}

int	*put_d(long long int num, int base, int *len)
{
	char	*out = "0123456789abcdef";
	if (num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		put_d(num / base, base, len);
	*len += write(1, &out[num % base], 1);
	return (len);
}

int	ft_printf(const char *ar, ...)
{
	va_list	p;
	int	len = 0;
	int	i = 0;

	va_start(p, ar);
	while (ar[i])
	{
		if (ar[i] == '%' && (ar[i + 1] == 's' || ar[i + 1] == 'd' || ar[i + 1] == 'x'))
		{
			++i;
			if (ar[i] == 's')
				put_s(va_arg(p, char *), &len);
			else if (ar[i] == 'd')
				put_d((long long int)va_arg(p, int), 10, &len);
			else if (ar[i] == 'x')
				put_d((long long int)va_arg(p, unsigned int), 16, &len);
		}
		else
			len += write(1, &ar[i], 1);
		++i;
	}
	va_end(p);
	return (len);
}

int	main(void)
{
	ft_printf("%d\n", ft_printf("hi there %s", "General Kenobi"));
}
