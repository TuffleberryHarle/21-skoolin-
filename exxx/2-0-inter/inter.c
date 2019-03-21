/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:14:53 by tharle            #+#    #+#             */
/*   Updated: 2019/03/19 19:49:08 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checker(char *av1, int k)
{
	int	i;

	i = k - 1;
	while (i >= 0)
	{
		if (av1[k] == av1[i--])
			return (1);
	}
	return (0);
}

void	operator(char *av1, char *av2)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (av1[i])
	{
		j = i;
		k = checker(av1, i);
		while (av2[j])
		{
			if (av1[i] == av2[j] && k == 0)
			{
				write(1, &av1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	operator(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
