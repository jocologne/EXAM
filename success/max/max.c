
int max(int* tab, unsigned int len)
{
	int res = 0;
	int i = 0;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}