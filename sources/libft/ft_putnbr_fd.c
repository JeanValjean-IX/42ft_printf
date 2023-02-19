/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:52:55 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/24 20:18:53 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	aux1;
	int	aux2;

	aux2 = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		aux1 = n / 10;
		aux2 = '0' + (n % 10);
		ft_putnbr_fd(aux1, fd);
		ft_putchar_fd(aux2, fd);
	}
	else
		ft_putchar_fd(48 + n, fd);
}
