#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;
	char nbr;

	i = 0;
	while (i <= 9)
	{
		nbr = i + 48;
		write(1, &nbr, 1);
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}

