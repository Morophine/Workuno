#include<unistd.h>
#include<stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int n)
{
	if(n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
		remove()
	}
else
	{
		ft_putchar(n + '0');
	}
}

int	main(void)
{
	ft_putnbr(100 );
	return (0);
}
