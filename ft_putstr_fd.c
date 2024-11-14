#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>

int main ()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd != -1)
	{	
		ft_putstr_fd("Hello, I am a string", fd);
		close(fd);
	}
	return (0);
}
*/