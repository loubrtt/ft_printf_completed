/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:14:30 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 12:55:26 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putft(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count = ft_putvoidhexa(va_arg(arg, void *), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		count = ft_putint(va_arg(arg, int));
	else if (c == 'u')
		count = ft_putunsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		count = ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count = ft_puthexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		count = write(1, "%", 1);
	return (count);
}
