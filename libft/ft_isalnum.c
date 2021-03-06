/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:43:02 by mbennett          #+#    #+#             */
/*   Updated: 2021/09/26 15:41:37 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 0172 && c >= 0141) || (c <= 071 && c >= 060)
		|| (c <= 0132 && c >= 0101 ))
		return (1);
	return (0);
}
