/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:14 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:48:34 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*new_src;
	char		*new_dest;

	new_src = (char *) src;
	new_dest = (char *) dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*new_dest++ = *new_src++;
	return (dest);
}
