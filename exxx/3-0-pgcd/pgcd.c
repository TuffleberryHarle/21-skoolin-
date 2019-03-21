/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:37:38 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 16:50:06 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		pgcd(int a, int b)
{
	int	i;

	i = 0;
	i = (a > b) ? b : a;
	while (i--)
		if (a % i == 0 && b % i == 0)
			return (i);
	return (1);
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
	return (0);
}
