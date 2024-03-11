/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:05:19 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:05 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_c(int n, int *ptr_sum)
{
	long int	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar_c('-', ptr_sum);
	}
	if (n_long > 9)
	{
		ft_putnbr_c(n_long / 10, ptr_sum);
		ft_putnbr_c(n_long % 10, ptr_sum);
	}
	else
		ft_putchar_c(n_long + '0', ptr_sum);
}
