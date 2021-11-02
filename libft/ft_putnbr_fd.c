/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:34:24 by mbennett          #+#    #+#             */
/*   Updated: 2021/10/05 18:19:57 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recursive_putnbr(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write (fd, "0", 1);
	else
		recursive_putnbr(n, fd);
}

void	recursive_putnbr(int n, int fd)
{
	unsigned char	c;
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		write (fd, "-", 1);
		recursive_putnbr(nbr * -1 / 10, fd);
		c = (nbr * -1 % 10) + 48;
		write (fd, &c, 1);
	}
	if (n > 0)
	{
		recursive_putnbr(nbr / 10, fd);
		c = (nbr % 10) + 48;
		write (fd, &c, 1);
	}
}
