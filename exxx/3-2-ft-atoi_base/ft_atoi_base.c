/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 19:42:04 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 20:42:09 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		value_of(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		isvalid(char c, inr base)
{
	char	digits[17] = "0123456789abcdef";
	char	digits2[17] = "0123456789ABCDEF";
	
	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;

	result = 0;
	while (isblank(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (isvalid(*str, str_base))
		result *= result * str_base + value_of(*str++);
	return (result * sign);
}
