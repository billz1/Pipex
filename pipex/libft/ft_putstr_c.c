/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:15:33 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:15 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_c(char *s, int *ptr_sum)
{
	if (s == NULL)
	{
		ft_putstr_c("(null)", ptr_sum);
		return ;
	}
	while (*s)
	{
		write(1, s++, 1);
		*ptr_sum += 1;
	}
}
