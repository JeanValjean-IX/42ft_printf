/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:07:30 by blopez-f          #+#    #+#             */
/*   Updated: 2023/02/27 22:22:20 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <libft.h>

int		ft_printf(const char *format, ...);
int		ft_printf_parse(const char *str, va_list arg);
void	ft_printf_char(char c);
void	ft_printf_str(char *str);
void	ft_printf_nbr(int num, char type);
void	ft_printf_nbr_base(int num, char *digits);
// void	ft_printf_ptr(void *ptr);

#endif