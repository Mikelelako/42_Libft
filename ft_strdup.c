/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:17:22 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 16:40:58 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	size_t	slen;

	slen = ft_strlen(s1);
	ptr = malloc(slen + 1);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, slen + 1);
	return (ptr);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	const char	*s1 = "hola mundo";

	printf("Dirreción de s1: %p\n", s1);
	printf("my function: %s\n", ft_strdup(s1));
	printf("System function: %s\n", strdup(s1));
	return (0);
}*/
