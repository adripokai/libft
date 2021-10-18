#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	atoi;

	i = 0;
	j = 1;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		j = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] - '0')
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}	
	return (atoi * j);
}
