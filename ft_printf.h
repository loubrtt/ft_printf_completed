/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:10:51 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 12:50:27 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
int	ft_is_conversion(char c);
int	ft_putchar(char c);
int	ft_putft(char c, va_list arg);
int	ft_puthexa(unsigned int num, int flag);
int	ft_putint(int i);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int i);
int	ft_putvoidhexa(void *adress, char *base);
#endif
