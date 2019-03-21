/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 22:53:36 by tharle            #+#    #+#             */
/*   Updated: 2019/03/20 23:03:12 by tharle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	current = *begin_list;
	while (current)
	{
		if (!(*cmp(current->data, *data_ref)))
			free(current);
		current = current->free;
	}
}
