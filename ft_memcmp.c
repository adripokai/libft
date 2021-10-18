#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (dst[i] == src[i] && i < (n - 1))
		i++;
	return (dst[i] - src[i]);
}
