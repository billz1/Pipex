/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:53:00 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:12 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_ptr_hexa_adress(unsigned long number, int *ptr_sum)
{
	char	base[17];

	ft_strlcpy(base, "0123456789abcdef", 17);
	if (number > 15)
	{
		ft_put_ptr_hexa_adress(number / 16, ptr_sum);
		ft_put_ptr_hexa_adress(number % 16, ptr_sum);
	}
	else
		ft_putchar_c(base[number], ptr_sum);
}

void	ft_putpointer(void *ptr, int *ptr_sum)
{
	if (ptr == NULL)
	{
		ft_putstr_c("(nil)", ptr_sum);
		return ;
	}
	ft_putstr_c("0x", ptr_sum);
	ft_put_ptr_hexa_adress((unsigned long) ptr, ptr_sum);
}
