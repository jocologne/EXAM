#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int type(char c)
{
	char *al = "nopqrstuvwxyzabcdefghijklm";
	char *au = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	if (c >= 'a' && c <= 'z')
	{
		ft_putchar(al[c - 97]);
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		ft_putchar(au[c - 65]);
		return (0);
	}
	ft_putchar(c);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2 || !argv[1])
	{
		ft_putchar('\n');
		return (0);
	}
	char *str = argv[1];
	int i = 0;
	while (str[i])
	{
		type(str[i]);
		i++;
	}
	ft_putchar('\n');
}