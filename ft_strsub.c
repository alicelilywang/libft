/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliwang <aliwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:41:55 by aliwang           #+#    #+#             */
/*   Updated: 2019/02/20 14:42:04 by aliwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;

	if (!s)
		return (NULL);
	new_sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (new_sub == NULL)
		return (NULL);
	new_sub = (char *)ft_memcpy(new_sub, (s + start), len);
	return (new_sub);
}
