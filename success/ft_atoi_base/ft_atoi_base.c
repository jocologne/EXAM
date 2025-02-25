
int value(char c, int base)
{
	int i = 0;
	char *bas = "0123456789abcdef";
	while (i < base)
	{
		if (c == bas[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	char *c;
	int i = 0;
	int res = 0;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while(str[i])
	{
		c = str[i];
		if(c >= 'A' && c <= 'F')
			c = c + 32;
		int v = value(c, str_base);
		if(v < 0)
			return (res * sign);
		res = res * str_base + v;
		i++;
	}
	return (res * sign);
}