char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;
	
	i = 0;
	
	//if (!s1[i] || !s2[i])
	//	return (0);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
