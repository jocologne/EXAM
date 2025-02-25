
int numlen(int n)
{
	int i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len = numlen(nbr);
	char *str = malloc(len + 1);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		return("0");
	while (nbr > 0)
	{
		str[len - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
	}
	return (str);
}