#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char ch_nbr;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr < 10)
	{
		ch_nbr = nbr + 48;
		write (1, &ch_nbr, 1);
	}
}

int main(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (nbr % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return (0);
}
