#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char text[] = "La casa es azul";
	char needle[] = "casa";

	printf("Lo que da la función es: %s", ft_strstr(text, needle)); 
}
