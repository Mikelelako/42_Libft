/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:07:56 by mbennett          #+#    #+#             */
/*   Updated: 2021/10/06 12:55:43 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n);
static char	*ft_putnbr_pos(char *str, int n, int l);
static char	*ft_putnbr_neg(char *str, int n, int l);

char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = ft_num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		str = (char *)malloc(sizeof (char) * (l + 2));
		if (!str)
			return (0);
		return (ft_putnbr_neg(str, n, l));
	}
	else
	{
		str = (char *)malloc(sizeof (char) * (l + 1));
		if (!str)
			return (0);
		return (ft_putnbr_pos(str, n, l));
	}
}

int	ft_num_len(int n)
{
	if (n < 0)
		n = (unsigned int)n * -1;
	if (n >= 1000000000)
		return (10);
	if (n >= 100000000)
		return (9);
	if (n >= 10000000)
		return (8);
	if (n >= 1000000)
		return (7);
	if (n >= 100000)
		return (6);
	if (n >= 10000)
		return (5);
	if (n >= 1000)
		return (4);
	if (n >= 100)
		return (3);
	if (n >= 10)
		return (2);
	return (1);
}

static char	*ft_putnbr_pos(char *str, int n, int l)
{
	*(str + l) = '\0';
	while (l--)
	{
		*(str + l) = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

static char	*ft_putnbr_neg(char *str, int n, int l)
{
	*(str + l + 1) = '\0';
	while (l--)
	{
		*(str + l + 1) = n % 10 + '0';
		n /= 10;
	}
	*str = '-';
	return (str);
}
