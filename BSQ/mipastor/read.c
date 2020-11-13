#include <fcntl.h>

void readfile(char* argv)
{
	int fd;
	int i;
	char texto;
	char *file;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if(fd != -1)
	{
		while(read(fd, &texto, 1))
			i++;
		file = (char*) malloc(sizeof(char) * i);
		i = 0;
		close(fd);
		fd = open(argv[1], O_RDONLY);

		while(read(fd, &texto, 1))
		{
			file[i] = texto;
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int			fd;
	int			ret;
	char		buffer[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ret = read(fd, buffer, BUF_SIZE);
	buffer[ret] = '\0';
	ft_putnbr(ret);
	ft_putchar('\n');
	ft_putstr(buffer);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
}
