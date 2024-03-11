/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:07:53 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:48:44 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		sum;
	int		*ptr_sum;

	va_start(args, str);
	sum = 0;
	ptr_sum = &sum;
	while (*str)
	{
		if (*str != '%')
			ft_putchar_c(*str, ptr_sum);
		else
		{
			ft_type_choose(*(str + 1), args, ptr_sum);
			str++;
		}
		str++;
	}
	va_end(args);
	return (sum);
}
