/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_choose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:48:23 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:50:38 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_type_choose(char type, va_list args, int *ptr_sum)
{
	if (type == 'd' || type == 'i')
		ft_putnbr_c(va_arg(args, int), ptr_sum);
	if (type == 'u')
		ft_putunsnbr(va_arg(args, unsigned int), ptr_sum);
	else if (type == 'c')
		ft_putchar_c((unsigned char) va_arg(args, int), ptr_sum);
	else if (type == 's')
		ft_putstr_c(va_arg(args, void *), ptr_sum);
	else if (type == 'x')
		ft_puthexa(va_arg(args, int), 'h', ptr_sum);
	else if (type == 'X')
		ft_puthexa(va_arg(args, int), 'H', ptr_sum);
	else if (type == 'p')
		ft_putpointer(va_arg(args, void *), ptr_sum);
	else if (type == '%')
		ft_putchar_c('%', ptr_sum);
	return ;
}
