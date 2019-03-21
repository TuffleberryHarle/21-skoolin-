/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:58:24 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 17:10:49 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *av)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	if (av[i] == '-')
	{
		sign = -1;
		i++;
	}
	else
		sign = 1;
	res = 0;
	while (av[i] >= 48 && av[i] <= 57)
	{
		res *= 10;
		res += (int)av[i] - 48;
		i++;
	}
	return (res * sign);
}

void	hexer(int n)
{
	if (n >= 16)
		hexer(n / 16);
	n %= 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	hexer(ft_atoi(av[1]));
	return (0);
}
