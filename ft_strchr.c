/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:28:52 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:28:54 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		pointer++;
	}
	if (*pointer == '\0' && c == '\0')
	{
		return (pointer);
	}
	return (NULL);
}
