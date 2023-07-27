#include <fcntl.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

int	ft_len(char *str)
{
	int	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_copy(char *dest, char *src)
{
	int	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_char(char *str, char c)
{
	if (!str)
		return (0);
	int	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		++i;
	}
	return (0);
}

char	*ft_dup(char *str)
{
	if (!str)
		return (0);
	char	*new = malloc(ft_len(str) + 1);
	if (!new)
		return (0);
	new = ft_copy(new, str);
	return (new);
}

char	*ft_join(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	char	*new = malloc(ft_len(s1) + ft_len(s2) + 1);
	if (!new)
		return (0);
	while (s1[i])
	{
		new[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		++j;
	}
	new[i + j] = '\0';
	free(s1);
	return (new);
}

char	*get_next_line(int fd)
{
	int	size;
	char	buf[BUFFER_SIZE + 1];
	char	*line;
	char	*next_line = NULL;
	static char	*mem;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (mem)
	{
		if ((next_line = ft_char(mem, '\n')))
		{
			*next_line = '\0';
			line = ft_dup(mem);
			line = ft_join(line, "\n");
			++next_line;
			ft_copy(mem, next_line);
		}
		else
		{
			line = ft_dup(mem);
			free(mem);
			mem = NULL;
		}
	}
	else
	{
		line = malloc(1);
		line[0] = '\0';
	}
	while (!next_line && (size = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[size] = '\0';
		if ((next_line == ft_char(buf, '\n')))
		{
			*next_line = '\0';
			line = ft_join(line, buf);
			line = ft_join(line, "\n");
			++next_line;
			mem = ft_dup(next_line);
		}
		else
			line = ft_join(line, buf);
	}
	if (line[0] == 0)
	{
		free(line);
		return (0);
	}
	return (line);
}
