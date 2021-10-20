/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:26:36 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:26:39 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Remplit les données de n octets de la mémoire, en écrivant le type c dans cette zone.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
