#include <stdio.h>
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	result;
	int	sign;
	int	stored;

	i = 0;
	result = 0;
	sign = 1;

	if (str_base < 2 || str_base > 16)
		return(0);

	//spaces and whitespaces 
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	//convert sign 
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	if (str[i] == '+')
		i++;

	//numbers 
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			stored = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			stored = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			stored = str[i] - 'A' + 10;
		else
			break;
		if (stored >= str_base)
			break;
		result = result * str_base + stored;
		i++;

	}
	return(sign * result);
}

/*int main()
{
    printf("%d\n", ft_atoi_base("101", 2));       // 5
    printf("%d\n", ft_atoi_base("1A", 16));       // 26
    printf("%d\n", ft_atoi_base("-1A", 16));      // -26
    printf("%d\n", ft_atoi_base("123", 10));      // 123
    printf("%d\n", ft_atoi_base("7F", 16));       // 127
    printf("%d\n", ft_atoi_base("77", 8));        // 63
    printf("%d\n", ft_atoi_base("A", 10));        // 0 (Invalid 'A' for base 10)
    printf("%d\n", ft_atoi_base("19", 8));        // 1 (Stops at '9' because it's invalid in base 8)
    return 0;
}*/
