#include <stdio.h>

char *ft_strncpy();

int		main(void)
{
	char aa[4] = "Hola";
	char bb[5];
	int nn = 2;

	ft_strncpy(aa, bb, nn);
	printf("El resultado es %s", aa);
	printf("Y la otra cosa es: %s", bb);
}
