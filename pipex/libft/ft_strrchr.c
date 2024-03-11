/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:52 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:50:15 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr_found;

	if (s[0] == '\0' && (unsigned char) c != '\0')
		return (NULL);
	ptr_found = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			ptr_found = (char *) &s[i];
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) &s[i]);
	return (ptr_found);
}
