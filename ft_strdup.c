/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:29:10 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/20 16:06:00 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cette fonction permet de dupliquer une chaîne de caractères.
// strdup alloue une nouvelle zone de mémoire via la fonction malloc afin d'y 
// copier la chaîne de caractères initiale. 
// libérer cette zone de mémoire après utilisation via la fonction free.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dest;

	dest = malloc ((sizeof(char)) * (ft_strlen(s1) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
