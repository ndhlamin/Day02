#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	
	ft_is_negative(56);
	return (0);
}


void	ft_is_negative(int n)
{

	if(n >= 0)
	{
		ft_putchar('P');
	}
	else if(n < 0)
	{
		ft_putchar('N');
	}
	ft_putchar('\n');
}
