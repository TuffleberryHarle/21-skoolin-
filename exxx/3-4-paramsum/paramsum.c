/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 21:18:23 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 21:40:55 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	int	n;
	int	sign;
	int	x;

	sign = 1;
	if (i < 0)
	{
		write(1, "-", 1);
		sign = -1;
	}
	n = i * sign;
	if (n >= 10)
		ft_putnbr(n / 10);
	x = n % 10 + 48;
	write(1, &x, 1);
}	

int		main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	i = ac - 1;
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}
