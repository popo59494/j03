#include <unistd.h>

void	ft_putnbr(int i);

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 20;
	d = 40;
	a = &c;
	b = &d;
	ft_swap(a,b);
	ft_putnbr(*a);
	ft_putnbr(*b);
	return(0);
}
