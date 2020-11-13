#include <stdio.h>
#include <string.h>

int     ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("Esto es mi función: %d\n", ft_strcmp("A", "a"));
	printf("Y esta es la original %d\n", strcmp("A", "a"));
	return (0);
}
