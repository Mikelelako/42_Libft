/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:35:24 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 16:43:35 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstlen == dstsize)
		return (dstlen + srclen);
	if (dstlen < dstsize)
	{
		while (src[i] && i < dstsize - dstlen - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char dst[50] = "hola";
	char src[50] = " mundo";

	char dst2[50] = "hola";
	char src2[50] = " mundo";

	size_t	dstsize = 20;

	printf("dest befor SYSTEM function: %s\n", dst);
	printf("SYSTEM strlcat returns: %zu\n", strlcat(dst, src, dstsize));
	printf("dest after SYSTEM function: %s\n\n", dst);

	printf("dest before MY function: %s\n", dst2);
	printf("MY strlcat returns: %zu\n", ft_strlcat(dst2, src2, dstsize));
	printf("dest after MY function: %s\n\n", dst2);
	return (0);
}*/
