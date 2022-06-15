#include "get_next_line.h"

int	find_line(char *find)
{
	int	count;

	count = 0;
	if(!find)
		return (0);
	while (find[count] != '\0')
	{
		if(find[count] == '\n')
			return (1);
		count++;
	}
	return (0);
}

char	*new_line(char *s)
{
	int		counter;
	char	*new;

	counter = 0;
	while (s[counter] != '\0' && s[counter] != '\n')
		counter++;
	new = malloc((counter + 2) * sizeof(char));
	if (!new)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0' && s[counter] != '\n')
	{
		new[counter] = s[counter];
		counter++;
	}
	if (s[counter] == '\n')
		new[counter++] = '\n';
	new[counter] = '\0';
	return (new);
}

char	*rest_new(char *s)
{
	int		count;
	int		size;
	char	*res;

	size = 0;
	count = 0;
	while (s[size] != '\0' && s[size] != '\n')
		size++;
	if (s[size] == '\0')
		return (NULL);
	size++;
	res = malloc((ft_strlen(s) - size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[size] != '\0')
	{
		res[count] = s[size];
		count++;
		size++;
	}
	res[count] = '\0';
	return (res);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	char	*new;

	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	count = 0;
	if (s1)
	{
		while (*s1 != '\0')
		{
			new[count] = *s1;
			count++;
			s1++;
		}
	}
	while (*s2 != '\0')
	{
		new[count] = *s2;
		count++;
		s2++;
	}
	new[count] = '\0';
	return (new);
}
