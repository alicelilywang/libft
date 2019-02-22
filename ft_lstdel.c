/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliwang <aliwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:46:21 by aliwang           #+#    #+#             */
/*   Updated: 2019/02/21 09:47:04 by aliwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*c;
	t_list	*n;

	c = *alst;
	while (c)
	{
		n = c->next;
		del((c->content), (c->content_size));
		free(c);
		c = n;
	}
	*alst = NULL;
}
