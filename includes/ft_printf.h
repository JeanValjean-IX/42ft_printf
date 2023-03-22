/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:22:24 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/19 15:02:45 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <libft.h>

typedef struct s_properties
{
	int	type;
	int	len;	
}	t_properties;

t_properties	ft_printf_init_properties(void);
int				ft_printf(const char *format, ...);
int				ft_printf_printer(va_list arg, t_properties *properties);
int				ft_printf_parser_arguments(const char *str, int pos,
					va_list arg, t_properties *properties);
int				ft_printf_parser_arguments_istype(char c);
int				ft_printf_parser(const char *str, va_list arg);
int				ft_printf_printer_c(char c);
int				ft_printf_printer_s(char *str);
int				ft_printf_printer_u(unsigned int num);
int				ft_printf_printer_i(int num);
int				ft_printf_printer_d(int num);
int				ft_printf_printer_x(unsigned int num, t_properties *properties);
int				ft_printf_printer_p(unsigned long num);
#endif
