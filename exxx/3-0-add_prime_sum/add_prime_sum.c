/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 23:15:00 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 13:46:15 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int j)
{
	int	res;

	if (j >= 10)
		ft_putnbr(j / 10);
	res = j % 10 + 48;
	write(1, &res, 1);
}

int		ft_atoi(char *av)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	if (av[0] == '-')
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

int		is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}

void	prime(char *av)
{
	int	n;
	int	k;
	int	j;
	int	i;

	n = ft_atoi(av);
	k = is_prime(n);
	j = 0;
	if (n == 1)
		j = 1;
	i = 1;
	while (++i <= n)
		if (is_prime(i))
			j += i;
	ft_putnbr(j);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	prime(av[1]);
	write(1, "\n", 1);
	return (0);
}
