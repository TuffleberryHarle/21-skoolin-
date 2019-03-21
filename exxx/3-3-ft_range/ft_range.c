/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 20:52:27 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 21:09:53 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int		*arr;
	int		count;
	int		i;

	if (start == end)
		count = 1;
	count = (start < end) ? end - start + 1 : start - end + 1;
	arr = malloc(sizeof(char) * count);
	i = 0;
	while (start <= end)
		arr[i++] = start--;
	return (arr);
}

int		main(void)
{
	printf("%d", *ft_range(5, 9));
	return (0);
}
