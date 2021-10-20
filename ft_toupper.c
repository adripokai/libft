/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:33:05 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:33:08 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit l'entier c donné s'il s'agit d'un code ASCII alphabétique minuscule en son équivalent majuscule.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
