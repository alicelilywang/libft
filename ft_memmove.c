/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliwang <aliwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 07:52:00 by aliwang           #+#    #+#             */
/*   Updated: 2019/02/21 10:15:01 by aliwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_dst;
	const char	*char_src;

	i = 0;
	char_dst = (char*)dest;
	char_src = (char*)src;
	if (char_dst > char_src)
		while ((int)n-- > 0)
			char_dst[n] = char_src[n];
	else
		while (n > i)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	return ((void*)dest);
}
