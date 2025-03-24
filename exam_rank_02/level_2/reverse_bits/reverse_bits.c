#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;

	i = 8;
	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

/*int	main()
{
	printf("%d", reverse_bits(38));
	return (0);
}*/
