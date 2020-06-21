#include <unistd.h>

void	ft_print_alphabet(void);

int		main(void)
{
	ft_print_alphabet();
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_print_alphabet(void)
{
//	write(1,"abcdefghijklmnopqrstuvwxyz", 26);

	char i;
	i = 'a';

	while(i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

