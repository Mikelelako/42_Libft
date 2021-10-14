/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:06:50 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 12:25:10 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	i = 0;
	if (!dest && !source && len > 0)
		return (dst);
	else if (source < dest)
	{	
		while (len > 0)
		{	
			len--;
			dest[len] = source[len];
		}
		return (dst);
	}
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
