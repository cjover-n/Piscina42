#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int nb;

	nb = 0;
	ft_ft(&nb);
	printf("%d", nb);
}
