#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int slen (char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char** argv)
{
	if (argc != 2 || !argv[1])
	{
		ft_putchar('\n');
		return (0);
	}
	int len = slen(argv[1]);
	while (len > 0)
	{
		ft_putchar(argv[1][len - 1]);
		len--;
	}
	ft_putchar('\n');
	return (0);
}