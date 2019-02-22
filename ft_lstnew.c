/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliwang <aliwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:48:34 by aliwang           #+#    #+#             */
/*   Updated: 2019/02/21 09:48:42 by aliwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_link;

	new_link = (t_list*)malloc(sizeof(*new_link));
	if (!new_link)
		return (NULL);
	new_link->next = NULL;
	if (!content)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
		return (new_link);
	}
	new_link->content = malloc(content_size);
	if (!new_link->content)
		return (NULL);
	ft_memcpy(new_link->content, content, content_size);
	new_link->content_size = content_size;
	return (new_link);
}
