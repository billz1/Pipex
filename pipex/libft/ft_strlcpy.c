/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:35:30 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:49:48 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char	*source;

	source = (char *) src;
	i = 0;
	while (source[i] && ((i + 1) < size))
	{
		dest[i] = source[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	return (ft_strlen(src));
}
