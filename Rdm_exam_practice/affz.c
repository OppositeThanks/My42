#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z\n", 2);
				return (0);
			}
			i++;
		}
	}
	write(1, "z\n", 2);
	return (0);
}

