/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:32:48 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/19 10:32:51 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit l'entier c donné s'il s'agit d'un code ASCII alphabétique majuscule en son équivalent minuscule

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
