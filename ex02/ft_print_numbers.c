#include <unistd.h>

void	ft_print_numbers(void);

int		main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char i;
	i = '0';

	while('9' >= i)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}
