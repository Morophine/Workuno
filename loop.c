#include <unistd.h>
#include<stdio.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_numbers(void)
{
        char nbr;

        nbr = '0';
        while(nbr <= '9')
        {
                ft_putchar(nbr);
                nbr++;
        }
}

int main()
{
	int nbr;

	int i;
	while(nbr)
	{
		i++;
		printf("%d", nbr);	
	}
	printf("%d", nbr);
}
