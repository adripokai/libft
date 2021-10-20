/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:22:44 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/20 16:04:52 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La mémoire dynamique est allouée par les fonctions malloc() ou calloc(). 
// Ces fonctions renvoient des pointeurs vers la mémoire allouée.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc((sizeof(char)) * (count * size));
	if (str == 0)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}
