/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:37:55 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/28 11:02:02 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *set)
{
	char	*newstr;
	size_t	slen;
	size_t	setlen;

	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	setlen = ft_strlen(set);
	newstr = (char *)malloc(sizeof (char) * (slen + setlen + 1));
	if (!newstr)
		return (NULL);
	ft_memmove(newstr, s1, slen);
	ft_memmove(newstr + slen, set, setlen);
	newstr[slen + setlen] = '\0';
	return (newstr);
}
