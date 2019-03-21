/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:46:44 by tharle            #+#    #+#             */
/*   Updated: 2019/03/19 20:26:56 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_length(char *av)
{
	int	i;

	i = 0;
	while (av[i++])
		;
	return (i - 2);
}

void	stringer(char *av, int len)
{
	int	i;

	i = 0;
	while (av[len] != '\t' && av[len] != ' ')
	{
		if (av[len - 1] == '\t' || av[len - 1] == ' ')
			i = len;
		len--;
	}
	while (av[i] && av[i] != ' ' && av[i] != '\t')
		write(1, &av[i++], 1);
}

int		main(int ac, char **av)
{
	int	len;

	len = ft_length(av[1]);
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][len] == '\t' && av[1][len] == ' ')
		len--;
	stringer(av[1], len);
	write(1, "\n", 1);
	return (0);
}
