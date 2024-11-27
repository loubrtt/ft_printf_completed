/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:17:53 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 12:53:51 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	len_num(unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

int	ft_puthexa(unsigned int num, char *base)
{
	int		len;

	len = len_num(num);
	if (num < 16)
		write(1, &base[num], 1);
	if (num >= 16)
	{
		ft_puthexa(num / 16, base);
		ft_puthexa(num % 16, base);
	}
	return (len);
}
