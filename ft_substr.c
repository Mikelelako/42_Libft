/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:48:15 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 17:58:56 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr = ft_strdup(""));
	if (len >= ft_strlen(s))
		size = ft_strlen(s) - start + 1;
	else
		size = len + 1;
	substr = (char *)malloc(sizeof (char) * size);
	if (!substr)
		return (NULL);
	substr = ft_memmove(substr, s + start, size);
	substr[size - 1] = '\0';
	return (substr);
}
