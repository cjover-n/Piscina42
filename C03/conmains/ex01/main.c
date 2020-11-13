#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("Esto es mi función: %d\n", ft_strncmp("AAA", "aaaa", 2));
	printf("Y esta es la original %d\n", strncmp("AAA", "aaaa", 2));
	return (0);
}
