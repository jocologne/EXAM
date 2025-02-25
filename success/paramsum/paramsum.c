#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnum(int n)
{
	if (n >=10)
		putnum(n / 10);
	ft_putchar((n % 10) + 48);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return(0);
	}
	int n = argc - 1;
	putnum (n);
	ft_putchar('\n');
}