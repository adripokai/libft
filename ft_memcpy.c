/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:25:57 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:58:54 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*original_dst;

	if (!dst && !src)
		return (NULL);
	original_dst = dst;
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (original_dst);
}
