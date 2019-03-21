/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_standarts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 18:14:12 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 19:16:27 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;
	int	sign;

	sign = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	n = nb * sign;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int		ft_atoi(char *s)
{
	int	n;

	n = 0;
	while (*s >= 48 && *s <= 57)
	{
		n *= 10;
		n += *s - 48;
		s++;
	}
	return (n);
}
