#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char s1[] = "perro";
	char s2[] = "gato";

	printf("Mio: %s", ft_strncat(s1, s2, 2));
	//printf("Original: %s", strncat(s1, s2, 2));
}
