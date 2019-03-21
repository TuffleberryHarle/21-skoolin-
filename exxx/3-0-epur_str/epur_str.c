/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:50:56 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 14:54:11 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checker(char *av, int i)
{
	while (av[i])
	{
		if (av[i] != ' ' && av[i] != '\t')
			return (1);
		i++;
	}
	return (0);
}


void	spacer(char *av)
{
	int	i;

	i = 0;
	while (av[i] ==  ' ' || av[i] == '\t')
		i++;
	while (av[i])
	{
		write(1, &av[i], 1);
		if ((av[i + 1] == ' ' || av[i + 1] == '\t') && checker(av, i + 1))
			write(1, " ", 1);
		if (!(checker(av, i + 1)))
			return ;
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	spacer(av[1]);
	return (0);
}
