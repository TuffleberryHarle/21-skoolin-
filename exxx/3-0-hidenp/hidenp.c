/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 15:56:24 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 16:21:15 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		len(char *av1)
{
	int	i;

	i = 0;
	while (av1[i])
		i++;
	return (i);
}

void	hidenp(char *av1, char *av2)
{
	int	i;
	int	j;
	int	len1;

	len1 = len(av1);
	i = 0;
	j = 0;
	while (av1[i])
	{
		while (av2[j])
		{
			if (av1[i] == av2[j])
			{
				len1--;
				break ;
			}
			j++;
		}
		i++;
	}
	(len1 == 0) ? write(1, "1\n", 2) : write(1, "0\n", 2);
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	hidenp(av[1], av[2]);
	return (0);
}
