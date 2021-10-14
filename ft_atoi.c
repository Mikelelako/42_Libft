/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:44:27 by mbennett          #+#    #+#             */
/*   Updated: 2021/10/06 12:03:15 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;

	sign = 1;
	res = 0;
	while (*str == 040 || (*str <= 015 && *str >= 011))
		str++;
	if (*str == 055 || *str == 053)
	{
		if (*str == 055)
			sign = sign * -1;
		str++;
	}
	while (*str <= 071 && *str >= 060)
	{
		res = res * 10 + *str - 060;
		str++;
	}
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	else if (res > 9223372036854775807)
		return (-1);
	return (res * sign);
}
