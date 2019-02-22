/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliwang <aliwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:37:24 by aliwang           #+#    #+#             */
/*   Updated: 2019/02/21 10:04:29 by aliwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *unsigned_b;
	unsigned char unsigned_c;

	unsigned_b = b;
	unsigned_c = (unsigned char)c;
	while (len-- > 0)
		*unsigned_b++ = unsigned_c;
	return (b);
}
