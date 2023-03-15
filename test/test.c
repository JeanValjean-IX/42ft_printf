/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:07:58 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/16 00:02:16 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	int len;
	
	len = printf("[01-A] printf(\"[%%s],[%%c],[%%]\", \"CADENA\",'c')    --> [%s],[%c],[100%%]", "CADENA", 'c');
	printf(" --> %i\n", len);
	len = ft_printf("[01-B] ft_printf(\"[%%s],[%%c],[%%]\", \"CADENA\",'c') --> [%s],[%c],[100%%]", "CADENA", 'c');
	ft_printf(" --> %i\n", len);
	len = printf("[02-A] printf(\"[%%i],[%%x],[%%X]\", 10, 255, 255)    --> [%i],[%x],[%X]", 10, 255, 255);
	printf(" --> %i\n", len);
	len = ft_printf("[02-B] ft_printf(\"[%%i],[%%x],[%%X]\", 10, 255, 255) --> [%i],[%x],[%X]", 10, 255, 255);
	ft_printf(" --> %i\n", len);
	return (0);
}