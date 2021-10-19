/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:31:30 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:31:33 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && len != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > (i + j))
		{
			j++;
			if (ft_strlen(needle) == j)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
