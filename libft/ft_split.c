/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:05:56 by mbennett          #+#    #+#             */
/*   Updated: 2021/10/08 18:05:33 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(const char *s, char c);
static void	ft_mem_asign(char *aux, char c, char **ptr);
static char	**ft_fill_array(char *aux, char c, int splits, char **ptr);

char	**ft_split(char const *s, char c)
{
	char	*aux;
	int		splits;
	char	**ptr;

	if (!s)
		return (NULL);
	aux = (char *)s;
	splits = ft_count_char(s, c);
	ptr = (char **)malloc(sizeof (char *) * (splits + 1));
	if (!ptr)
		return (NULL);
	ft_mem_asign(aux, c, ptr);
	return (ft_fill_array(aux, c, splits, ptr));
}

static int	ft_count_char(const char *s, char c)
{
	int	i;
	int	splits;

	splits = 0;
	if (s[0] && s[0] != c)
		splits++;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				i++;
				continue ;
			}
			i++;
			splits++;
		}
		if (s[i] != c && s[i])
			i++;
	}
	return (splits);
}

static void	ft_mem_asign(char *aux, char c, char **ptr)
{
	int	i;
	int	j;
	int	len_substr;

	i = 0;
	j = 0;
	len_substr = 0;
	while (aux[i])
	{
		if (aux[i] != c)
		{
			len_substr++;
			if ((aux[i + 1] == c || aux[i + 1] == '\0') && len_substr != 0)
			{
				ptr[j] = (char *)malloc(sizeof (char) * (len_substr + 1));
				if (!ptr[j])
					return ;
				len_substr = 0;
				j++;
			}
		}
		i++;
	}
}

static char	**ft_fill_array(char *aux, char c, int splits, char **ptr)
{
	int	i;
	int	j;
	int	substr;

	i = 0;
	j = 0;
	substr = 0;
	while (aux[i])
	{
		if (aux[i] != c)
		{
			ptr[substr][j] = aux[i];
			j++;
			if (aux[i + 1] == c || aux[i + 1] == '\0')
			{
				ptr[substr][j] = '\0';
				j = 0;
				substr++;
			}
		}
		i++;
	}
	ptr[splits] = NULL;
	return (ptr);
}
