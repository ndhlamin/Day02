#include <unistd.h>

void	ft_print_alphabet(void);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	write(1,"abcdefghijklmnopqrstuvwxyz\n", 27);
}