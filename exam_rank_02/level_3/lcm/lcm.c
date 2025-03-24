unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (!a || !b)
		return (0);

	if (a > b)
		c = a;
	else
		c = b;

	while (c % a != 0 || c % b != 0)
		c++;
	
	return (c);
}

/*#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	printf("%u\n", lcm(12, 18));  // Output: 36
    	printf("%u\n", lcm(7, 5));    // Output: 35
    	printf("%u\n", lcm(0, 2942)); // Output: 0
    	printf("%u\n", lcm(10, 0));
	return (0);
}*/
