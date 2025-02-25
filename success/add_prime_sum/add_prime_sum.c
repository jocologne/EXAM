#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;
	int i = 0;
	int sign = 1;
	while (s[i] <= 32)
		i++;
	if (s[i] == '-')
	{
		sign = -sign;
		i++;
	}
	if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res * sign);
}

int isprime(int n)
{
	int i = 2;
	if (n == 2)
		return (1);
	while (i < n)
	{
		if (n % i ==0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnum(int n)
{
	if (n >= 10)
		putnum(n / 10);
	ft_putchar((n % 10) + 48);
}

int main(int argc, char** argv)
{
	int res = 0;
	int i = 2;
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return(0);
	}
	int n = ft_atoi(argv[1]);
	if (n < 2)
	{
		write(1, "0\n", 2);
		return(0);
	}
	while (i <= n)
	{
		if (isprime(i))
			res += i;
		i++;
	}
	putnum(res);
	ft_putchar('\n');
}