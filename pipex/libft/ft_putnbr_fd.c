/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:05:19 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:09 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar_fd('-', fd);
	}
	if (n_long > 9)
	{
		ft_putnbr_fd(n_long / 10, fd);
		ft_putnbr_fd(n_long % 10, fd);
	}
	else
	{
		ft_putchar_fd(n_long + '0', fd);
	}
}
