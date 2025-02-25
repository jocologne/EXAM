#include <stdlib.h>

int isreject(char c, char *reject)
{
	int i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while (s[i])
	{
		if (!isreject(s[i], reject))
			break;
		i++;
	}
	return (i);
}