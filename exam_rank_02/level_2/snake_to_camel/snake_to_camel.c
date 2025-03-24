#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isLower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	toUpper(int c)
{
	if (isLower(c))
		return (c - 32);
	return (c);
}

int	main(int argc, char** argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				ft_putchar(toUpper(argv[1][i]));
			}
			else
				ft_putchar(argv[1][i]);
			i++;

		}

	}
	write(1, "\n", 1);
}
