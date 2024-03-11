/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:33:33 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:01 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa(unsigned int number, char hex_base, int *ptr_sum)
{
	char			base[17];

	if (hex_base == 'h')
		ft_strlcpy(base, "0123456789abcdef", 17);
	else if (hex_base == 'H')
		ft_strlcpy(base, "0123456789ABCDEF", 17);
	if (number > 15)
	{
		ft_puthexa(number / 16, hex_base, ptr_sum);
		ft_puthexa(number % 16, hex_base, ptr_sum);
	}
	else
		ft_putchar_c(base[number], ptr_sum);
}
