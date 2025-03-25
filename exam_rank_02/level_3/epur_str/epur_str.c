#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	verif;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
		{
			
			if(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				verif = 1;
			}
			if(argv[1][i] != ' ' || argv[1][i] == '\t')
			{
				if(verif == 1 && argv[1][i])
					write(1, " ", 1);
				verif = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
