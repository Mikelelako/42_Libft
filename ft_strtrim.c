/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:57:11 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 18:03:28 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		i;
	int		j;

	if (!s1)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	if (!set)
		return (newstr = ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 1 && ft_strrchr(set, s1[j]))
		j--;
	return (newstr = ft_substr((char *)s1, i, j - i + 1));
}
