/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:30:52 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/16 18:26:20 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main()
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
	len = printf("%i\n", -2147483649);
	printf("%i",len);
	return (0);
}
