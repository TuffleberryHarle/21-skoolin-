/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 21:45:12 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 22:35:02 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cap(char *av)
{
	int	i;

	i = 0;
	if (av[i] >= 'a' && av[i] <= 'z')
	{
		av[i] -= 32;
		write(1, &av[i++], 1);
	}
	while (av[i])
	{
		if (av[i - 1] >= 32 && av[i - 1] <= 46 && av[i] >= 'a' && av[i] <= 'z')
			av[i] -= 32;
		else if ((av[i - 1] > 32 && av[i - 1] < 65) ||
			(av[i - 1] > 90 && av[i - 1] < 97) || av[i - 1] > 122)
			av[i] = (av[i] >= 'A' && av[i] <= 'Z') ? av[i] + 32 : av[i];
		else if (av[i - 1] >= 'A' && av[i - 1] <= 'Z')
			av[i] = (av[i] >= 'A' && av[i] <= 'Z') ? av[i] + 32 : av[i];
		else if (av[i - 1] >= 'a' && av[i - 1] <= 'z')
			av[i] = (av[i] >= 'A' && av[i] <= 'Z') ? av[i] + 32 : av[i];
		write(1, &av[i++], 1);
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
		cap(av[i++]);
	return (0);
}
