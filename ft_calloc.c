#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *str;

	str = malloc((sizeof(char))*(count * size));
	if (str == 0)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}
