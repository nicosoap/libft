/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 21:27:10 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 22:22:35 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*current;

	if (alst)
	{
		current = *alst;
		while (current)
		{
			if (del)
				(*del)(current->content, current->content_size);
			free(current);
			current = current->next;
		}
	}
	*alst = 0;
}
