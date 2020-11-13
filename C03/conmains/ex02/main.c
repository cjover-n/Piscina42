#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char s1[] = "perro";
	char s2[] = "gato";

	printf("Mio: %s", ft_strcat(s1, s2));
	printf("Original: %s", strcat(s1, s2));
}
