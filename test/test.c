/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:30:52 by blopez-f          #+#    #+#             */
/*   Updated: 2023/04/02 20:59:07 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int len;
	void *ptr;

	ft_printf("[01]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%]");
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%]");
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[02]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%c]");
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%c]");
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[03]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%s]");
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%s]");
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[04]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%c] --> [%c]",'C');
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%c] --> [%c]",'C');
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[05]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%s] --> [%s]","CADENA");
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%s] --> [%s]","CADENA");
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[06]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%%%%%%%%][%%c][%%s] --> [%%%%%][%c][%s]",'C',"CADENA");
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%%%%%%%%][%%c][%%s] --> [%%%%%][%c][%s]",'C',"CADENA");
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	ft_printf("[07]-----------------------------------------------------------------\n");
 	len = printf("    printf    --> [%%i] --> [%i]",14);
 	printf(" --> %i\n", len);
 	len = ft_printf("    ft_printf --> [%%i] --> [%i]",14);
 	printf(" --> %i\n", len);
 	ft_printf("---------------------------------------------------------------------\n\n");
	return (0);
}
