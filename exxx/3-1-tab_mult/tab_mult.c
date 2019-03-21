/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 18:48:10 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 19:36:31 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_atoi(char *s);

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i++], 1);
	}
}

int		mult(int num, char first)
{
	int	res;

	return (res = num * ((int)first - 48));
}

void	tab_mult(int num)
{
	char	first;
	char	*second;
	char	*is;

	first = '1';
	second = " x ";
	is = " = ";
	while (first <= '9')
	{
		write(1, &first, 1);
		ft_putstr(second);
		ft_putnbr(num);
		ft_putstr(is);
		ft_putnbr(mult(num, first));
		write(1, "\n", 1);
		first++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	tab_mult(ft_atoi(av[1]));
	return (0);
}
