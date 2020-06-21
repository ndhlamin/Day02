#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
		ft_print_reverse_alphabet();
		return (0);
}

void	ft_print_reverse_alphabet(void)
{
		char reva;
		reva = 'z';

		while(reva >= 'a')
		{
			ft_putchar(reva);
			reva--;
		}
		ft_putchar('\n');
}
