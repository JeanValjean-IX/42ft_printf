/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:30:52 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/22 22:31:26 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main()
{
	int len;
	void *ptr;

	ft_printf("---------------------------------------------------------------------\n");	
	len = printf("[01] printf(\"[100%%%]\")   --> [100%%%] ");
	printf(" --> %u\n", len);
	len = ft_printf("[01] ft_printf(\"[100%%%]\") --> [100%%%] ");
	printf(" --> %u\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	len = printf("[02] printf(\"[%%%c]\", 'c')    --> [%%%c] ", 'c');
	printf(" --> %i\n", len);
	len = ft_printf("[02] ft_printf(\"[%%%c]\", 'c') --> [%%%c] ", 'c');
	printf(" --> %i\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	len = printf("[03] printf(\"[%%s]\", \"CADENA\")    --> [%s] ", "CADENA");
	printf(" --> %i\n", len);
	len = ft_printf("[03] ft_printf(\"[%%s]\", \"CADENA\") --> [%s] ", "CADENA");
	printf(" --> %i\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	len = printf("[04] printf(\"[%%u][%%u][%%u]\", 0, 10, -10)    --> [%u][%u][%u] ", 0, 10, -10);
	printf(" --> %i\n", len);
	len = ft_printf("[04] ft_printf(\"[%%u][%%u][%%u]\", 0, 10, -10) --> [%u][%u][%u] ", 0, 10, -10);
	printf(" --> %i\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	len = printf("[05] printf(\"[%%i][%%i][%%i][%%i][%%i][%%i]\", 0, 10, -10)    --> [%i][%i][%i] ", 0, 10, -10);
	printf(" --> %i\n", len);
	len = ft_printf("[05] ft_printf(\"[%%i][%%i][%%i][%%i][%%i][%%i]\", 0, 10, -10) --> [%i][%i][%i] ", 0, 10, -10);
	printf(" --> %i\n", len);
	len = printf("[05] printf(\"[%%i][%%i][%%i]\", -2147483648, 2147483647, 2147483648)    --> [%i][%i][%i] ", -2147483648, 2147483647, 2147483648);
	printf(" --> %i\n", len);
	len = ft_printf("[05] ft_printf(\"[%%i][%%i][%%i]\", -2147483648, 2147483647, 2147483648) --> [%i][%i][%i] ", -2147483648, 2147483647, 2147483648);
	printf(" --> %i\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	len = printf("[06] printf(\"[%%x][%%X][%%x][%%x][%%X]\", 0, 12, 15, 32, -32)    --> [%x][%X][%x][%x][%X] ", 0, 12, 15, 32, -32);
	printf(" --> %i\n", len);
	len = ft_printf("[06] ft_printf(\"[%%x][%%X][%%x][%%x][%%X]\", 0, 12, 15, 32, -32) --> [%x][%X][%x][%x][%X] ", 0, 12, 15, 32, -32);
	printf(" --> %i\n", len);
	ft_printf("---------------------------------------------------------------------\n");
	ptr = calloc(sizeof(char),20);
	len = printf("[06] printf(\"[%%p][%%p][%%p]\", 0, 12, ptr)    --> [%p][%p][%p] ", 0, 12, ptr);
	printf(" --> %i\n", len);
	len = ft_printf("[06] ft_printf(\"[%%p][%%p][%%p]\", 0, 12, ptr) --> [%p][%p][%p] ", 0, 12, ptr);
	printf(" --> %i\n", len);
	free(ptr);
	ft_printf("---------------------------------------------------------------------\n");

	return (0);
}
