#include "get_next_line.h"

char *get_next_line(int fd)
{
	int			count;
	char		*line;
	static char	*new;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if(!line)
		return (NULL);
	count = 1;
	while(count > 0 && !find_line(line))
	{
		count = read(fd, line, BUFFER_SIZE);
		line[count] = '\0';
		new = ft_strjoin(new, line);
	}
	line = new_line(new);
	new = rest_new(new);
	return (line);
}

#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	int a;

	a = open("file", O_RDONLY);
	printf("%s", get_next_line(a));
	printf("%s", get_next_line(a)); 
}
