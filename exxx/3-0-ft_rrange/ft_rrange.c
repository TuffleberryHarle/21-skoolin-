/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 15:15:12 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 15:49:41 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int	*a;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(a = malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		a[len] = (end >= start) ? start++ : start--;
	return (a);
}

int		main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	printf("%d", *ft_rrange(a, b));
	return (0);
}
