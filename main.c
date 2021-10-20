/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:36:34 by ajuan             #+#    #+#             */
/*   Updated: 2021/10/20 14:17:00 by ajuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* atoi
**#include <stdio.h>
**
**int		main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%d\n", ft_atoi(argv[1]));
**}
*/

/* memcpy
**#include <string.h>
**
**int		main(void)
**{
**	write(1, "ft_memcpy\n", 10);
**	ft_memcpy(NULL, NULL, 0);
**	write(1, "memcpy\n", 7);
**	memcpy(NULL, NULL, 0);
**}
*/

/* split
int	main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split(", hello, sp    lit ,,,,  th,,,is,plz, , ", ", ");
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}
*/

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;
	char	**tab;

	i = 0;
	tab = ft_split("bonjour ca va");
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
