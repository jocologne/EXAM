#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int bits[8];
	int i = 0;
	while (i < 8)
	{
		bits[7 - i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	int j = 0;
	while (j < 8)
	{
		ft_putchar(bits[j] + '0');
		j++;
	}
}