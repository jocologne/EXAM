#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int isunique(char c, char *s, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (c == s[i])
			return(0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 3 || !argv[1] || !argv[2])
	{
		ft_putchar('\n');
		return(0);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	int i = 0;
	while (s1[i])
	{
		int j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && isunique (s2[j], s2, j) && isunique(s1[i], s1, i))
				ft_putchar(s1[i]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}