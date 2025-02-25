#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int type(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	int i = 0;
	while (argv[1][i])
	{
		ft_putchar(type(argv[1][i]));
		i++;
	}
	ft_putchar('\n');
}