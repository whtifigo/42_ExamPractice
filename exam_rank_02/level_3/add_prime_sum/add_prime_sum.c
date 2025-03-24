//positive intenger as an argument (aka atoi)
//sum of all prime numbers (putnmb)
//support prime funtion

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	write(1, &"0123456789"[i % 10], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int main (int argc, char** argv)
{
	int	n;
	int	sum;

	if (argc != 2 || ft_atoi(argv[1]) <= 0)
	{	
		write(1, "0\n", 2);
		return (0);
	}

	n = ft_atoi(argv[1]);
	sum = 0;
	while (n > 1)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
