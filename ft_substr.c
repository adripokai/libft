#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	stl;

	if (!s)
		return (NULL);
	stl = ft_strlen(s + start);
	if (stl < len)
		len = stl;
	str = malloc((sizeof(char)) * (len + 1));
	if (str == 0)
		return (NULL);
	i = ft_strlen(s);
	j = start;
	k = 0;
	while (j < i && k < len)
	{
		str[k] = s[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}